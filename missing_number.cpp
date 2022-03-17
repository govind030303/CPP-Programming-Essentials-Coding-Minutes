#include<iostream>
using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    //implement your code here
    int key = 1;
    for(int i=0; i<sizeOfArray; i++) {
        for(key=1; key<=sizeOfArray; key++) {
            if(A[i] == key) {
                continue;
            }
            else {
                break;
            }
        }
    }
    return key;
}

int main() {
    int n;
    int Array[] = {0};
    cout<<"Enter the size of the Array: ";
    cin>>n;
    
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++) {
        cin >> Array[i];
    }

    cout<<"The missing digit is: " << findMissingNumber(Array, n) << endl;
}