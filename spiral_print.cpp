// Program to print 2-D Array in Spiral Form

#include<iostream>
using namespace std;

void spiral_print(int array[][100], int row, int column) {
    int startRow = 0;
    int endRow = row-1;
    int startCol = 0;
    int endCol = column-1;

    while(startCol <= endCol && startRow <= endRow) {

        for(int col=startCol; col<=endCol; col++) {
            cout << array[startRow][col] << " ";
        }
        for(int row=startRow+1; row<=endRow; row++) {
            cout << array[row][endCol] << " ";
        }
        for(int col=endCol-1; col>=startCol; col--) {
            if(startRow == endRow) {
                break;
            }
            cout << array[endRow][col] << " ";
        }
        for(int row=endRow-1; row>=startRow+1; row--) {
            if(startCol == endCol) {
                break;
            }
            cout << array[row][startCol] << " ";
        }


        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}

int main() {
    int row, column;
    int array[100][100];

    cout<<"Enter the number of rows and columns: ";
    cin >> row >> column;

    cout<<"Enter the 2-D Array Elements: " << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            cin >> array[i][j];
        }
    }

    spiral_print(array, row, column);
}