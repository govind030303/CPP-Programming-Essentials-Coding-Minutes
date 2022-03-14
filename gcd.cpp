#include<iostream>
using namespace std;

int greatestCommonDivisor(int x, int y) {
    int gcd = 1;
    if(x==0)
        gcd = y;
    else if(y==0)
        gcd = x;
    else if(x<y) {
        for(int i=1; i<=x; i++) {
            if(x%i==0 && y%i==0) {
                gcd=i;
            }
        }
        
    }
    else {
        for(int i=1; i<=y; i++) {
            if(x%i==0 && y%i==0) {
                gcd=i;
            }
        }
    }

    // int gcd = 1;
    // int i = 2;

    // while(x > 1 || y > 1) {
    //     while(x%i==0 && y%i==0) {
    //         gcd *= i;
    //         x/=i;
    //         y/=i;
    //     }
    //     while(x%i==0) {
    //         x/=i;
    //     }
    //     while(y%i==0) {
    //         y/=i;
    //     }

    //     i++;
    // }

    return gcd;
}

int main() {
    int x, y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<"The GCD of these two numbers is: " << greatestCommonDivisor(x,y);
}