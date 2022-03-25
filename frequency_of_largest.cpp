#include<iostream>
using namespace std;

int frequencyOfLargestElement (int A[], int size) {

    int largest = A[size-1];
    int count = 0;

    for(int i=0; i<size; i++) {
        if(A[i] == largest) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    int Array[size];

    cout << "Enter the sorted array: ";
    for(int i = 0; i < size; i++) {
        cin  >> Array[i];
    }

    cout << "The frequency of the largest element is: " << frequencyOfLargestElement(Array, size);
}