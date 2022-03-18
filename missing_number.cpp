#include<iostream>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    int sumOfAll = (sizeOfArray*(sizeOfArray+1))/2;

    int sumOfInput = 0;
    for(int i = 0; i<sizeOfArray-1; i++) {
        sumOfInput += A[i];
    }

    return (sumOfAll - sumOfInput);
    
}

int main() {
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;
    
    int Array[n-1];
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n-1; i++) {
        cin >> Array[i];
    }

    cout<<"The missing digit is: " << findMissingNumber(Array, n) << endl;
}