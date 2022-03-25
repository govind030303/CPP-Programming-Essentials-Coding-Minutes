#include<iostream>
using namespace std;

int linear_search(int Array[], int size, int key) {
    for(int i=0; i<size; i++) {
        if(key == Array[i]) {
            return i;
            break;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int Array[size];
    cout<<"Enter the Array Elements: ";
    for(int i=0; i<size; i++) {
        cin >> Array[i];
    }

    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int res = linear_search(Array, size, key);
    if(res == -1) {
        cout << "The key element is not present in the array";
    }
    else
        cout << "The key element is present at position " << res+1 << endl;
}