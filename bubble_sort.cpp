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

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int Array[size];

    cout<<"Enter the elements: ";
    for(int i=0; i<size; i++) {
        cin >> Array[i];
    }

    bubble_sort(Array, size);

    for(auto x:Array) {
        cout << x << " ";
    }
}