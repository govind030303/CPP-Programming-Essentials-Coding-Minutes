#include<iostream>
using namespace std;


void bubble_sort(int Array[], int size) {

    for(int i = 0; i<size; i++) {
        for(int j = 0; j<size-1; j++) {
            if(Array[j] > Array[j+1]) {
                swap(Array[j], Array[j+1]);
            }
        }
    }
}

int calculateMedian(int A[], int sizeOfArray) {
    
    int median_index = 0;
    if(sizeOfArray%2 == 0) {
        median_index = (sizeOfArray)/2;
        return ((A[median_index-1] + A[median_index]) / 2);
    }
    else {
        median_index = (sizeOfArray + 1)/2;
        return (A[median_index-1]);
    }
    
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int Arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++) {
        cin >> Arr[i];
    }

    bubble_sort(Arr, n);

    cout << "The median of the given array is: " << calculateMedian(Arr, n) << endl;
}