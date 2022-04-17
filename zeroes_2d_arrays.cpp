#include<iostream>
#include<vector>
using namespace std;

int numberOfZeroes(vector<vector<int>> array) {
    int count = 0;

    for(int i=0; i<array.size(); i++) {
        for(int x : array[i]) {
            if(x==0) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int row, col;
    vector<vector<int>> array;

    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;

    cout<<"Enter the 2-D Arrays Elements: " << endl;
    for(int i=0; i<row; i++) {
        vector<int> v1;
        for(int j=0; j<col; j++) {
            int elements;
            cin >> elements;
            v1.push_back(elements);
        }
        array.push_back(v1);
    }

    cout << "Number of zeroes in the arrays are: " << numberOfZeroes(array);
}