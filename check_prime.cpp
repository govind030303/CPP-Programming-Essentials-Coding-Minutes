#include<iostream>
using namespace std;

int is_prime(int n) {
    int prime = 0;
    if(n==1)
        prime=0;
    else {

        for(int i=2; i<n; i++) {
            if(n%i==0) {
                prime = 0;
                break;
            }
            else
                prime = 1;
        }
    }
    return prime;
}

int main() {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int prime = is_prime(num);
    if(prime==0)
        cout<<"The given number is not prime";
    else
        cout<<"The given number is prime";
}