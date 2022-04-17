#include<iostream>
#include<vector>
using namespace std;

int product(vector<vector<int>> array) {
    int product = 1;

    for(int i=0; i<array.size(); i++) {
        for(int x : array[i]) {
            product*=x;
        }
    }
    
    if(product<0) {
        return 0;
    }
    else
        return 1;
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

    int res = product(array);
    if(res==0) {
        cout << "The product of all the elements of the array is negative" << endl;
    }
    else
        cout << "The product of all the elements of the matrix is non-negative" << endl;
}