#include<iostream>
#include<vector>

using namespace std;

int reverseArray(vector<int> array) {
    int size = array.size();
    int mid = size/2;

    int end = size-1;
    for(int i=0; i<mid; i++) {
        swap(array[i], array[end]);
        end--;
    }

    for(int x : array) {
        cout << x << " ";
    }
}

int main() {
    int size;
    vector<int> array;

    cout << "Enter the size of the array: ";
    cin >> size;

    for(int i=0; i<size; i++) {
        int elements;
        cin >> elements;

        array.push_back(elements);
    }

    reverseArray(array);
}