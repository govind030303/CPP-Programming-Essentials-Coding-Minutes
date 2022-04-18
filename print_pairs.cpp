#include<iostream>
#include<vector>
using namespace std;

void print_pairs(vector<int> array) {
    int size = array.size();

    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            cout << array[i] << "," << array[j] << endl;
        }
    }
}

int main() {
    vector<int> array = {1, 2, 3, 4, 5, 6};

    print_pairs(array);
}