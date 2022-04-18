#include<iostream>
#include<vector>
using namespace std;

int even_sum(vector<vector<int>> matrix) {
    int sum = 0;

    for(int i=0; i<matrix.size(); i++) {
        for(int x : matrix[i]) {
            if(x%2==0) {
                sum+=x;
            }
        }
    }
    return sum;
}

int main() {
    int row, col;
    vector<vector<int>> matrix;

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
        matrix.push_back(v1);
    }

    cout << "The sum of even numbers of the matrix is: " << even_sum(matrix) << endl;
}