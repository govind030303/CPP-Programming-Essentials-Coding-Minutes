#include<iostream>
#include<vector>
using namespace std;

int frequencyOfLargestElement (vector<int> array) {

    int array_size = array.size();
    int largest = array[array_size-1];
    int count = 0;

    for(int i=0; i<array_size; i++) {
        if(array[i] == largest) {
            count++;
        }
    }
    return count;
}

int main() {
    int size;
    vector<int> array;
    int elements;
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the sorted array: ";
    for(int i = 0; i < size; i++) {
        cin >> elements;
        array.push_back(elements);
    }

    cout << "The frequency of the largest element is: " << frequencyOfLargestElement(array);
}