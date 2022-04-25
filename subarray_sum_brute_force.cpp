#include<iostream>
#include<vector>

using namespace std;

void subarray(vector<int> array) {
     int size = array.size();
     int largest = 0;
     
     for(int i=0; i<size; i++) {
          for(int j=i; j<size; j++) {
              int sum = 0;
               for(int k=i; k<=j; k++) {
                    cout << array[k] << ",";
                    sum+=array[k];
               }
               cout << " Sum = " << sum << endl;
               
               largest = max(largest, sum);
          }
     }
     cout << endl;
     cout << "Largest Sum = " << largest << endl;
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