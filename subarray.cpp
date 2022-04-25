#include<iostream>
#include<vector>

using namespace std;

void subarray(vector<int> array) {
     int size = array.size();
     
     for(int i=0; i<size; i++) {
          for(int j=i; j<size; j++) {
               for(int k=i; k<=j; k++) {
                    cout << array[k] << ",";
               }
               cout << endl;
          }
     }
}

int main() {
     
     int size;
     cout << "Enter the size of the array: ";
     cin >> size;

     vector<int> array;

     cout << "Enter the array elements: " << endl;
     for(int i=0; i<size; i++) {
          int elements;
          cin >> elements;
          array.push_back(elements);
     }

     subarray(array);

     return 0;
}