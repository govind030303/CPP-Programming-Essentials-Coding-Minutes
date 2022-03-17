#include<iostream>
using namespace std;

int factorial (int number) {
    int factorial = 1;
    while(number>0) {
        factorial*=number;
        number--;
    }
    return factorial;
}

int nCr(int n, int r) {
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}

int main() {
    int n, r;
    cout<<"Enter the value of n and r: "<<endl;
    cin>>n>>r;

    cout<<"The nCr value of the given input is: " << nCr(n,r)<<endl;
}