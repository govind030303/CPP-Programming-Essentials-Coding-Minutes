#include<iostream>
using namespace std;

int countOfOne(int A[], int size) {
    int count = 0;
    for(int i=0; i<size; i++) {
        if(A[i] == 1)
            count++;
    }
    return count;
}

int main() {
    int A[] = {0, 0, 1, 1, 1, 1, 1, 1};
    int size = sizeof(A)/ sizeof(int);

    cout << "The no. of is: " << countOfOne(A, size);
}