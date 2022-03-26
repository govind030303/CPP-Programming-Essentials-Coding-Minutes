#include<iostream>
using namespace std;

int binary_search(int Array[], int size, int key) {
    int start = 0;
    int end = size-1;
    
    while(start<=end) {
        int mid = (start+end)/2;

        if(Array[mid] == key) {
            return mid;
        }
        else if(Array[mid] < key) {
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int Array[size];
    cout << "Enter the elements: ";
    for(int i = 0; i<size; i++) {
        cin >> Array[i];
    }
    int key;
    cout << "Enter the key to be searched: ";
    cin >> key;

    int res = binary_search(Array, size, key);
    if(res == -1) {
        cout << "The element is not present in the array" << endl;
    }
    else
        cout << "The key is found at position: " << res+1;
}