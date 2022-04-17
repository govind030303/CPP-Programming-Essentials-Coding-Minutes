#include<iostream>
using namespace std;

void array_2d(int array[100][100], int row, int column) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            cout<<array[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main() {
    int row, column;
    int array[100][100];
    cout<<"Enter the number of rows and columns: ";
    cin >> row >> column;
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<column; j++) {
            cin >> array[i][j];
        }
    }

    array_2d(array, row, column);
}