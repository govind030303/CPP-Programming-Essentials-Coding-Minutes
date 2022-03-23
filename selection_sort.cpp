#include<iostream>
using namespace std;


void selection_sort(int Array[], int size) {

    for(int pos=0; pos<size-1; pos++) {
        int min = pos;
        for(int i = pos; i<size; i++) {
            if(Array[i] < Array[pos]) {
                min = i;
            } 
        }
        swap(Array[min], Array[pos]);
        
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

    selection_sort(Array, size);

    for(auto x:Array) {
        cout << x << " ";
    }
}