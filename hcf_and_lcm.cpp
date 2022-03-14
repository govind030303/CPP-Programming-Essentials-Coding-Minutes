#include<iostream>
using namespace std;

int hcf_and_lcm(int x, int y) {
    int hcf = 1;
    int lcm = 1;
    int i = 2;

    while(x > 1 || y > 1) {
        while(x%i==0 && y%i==0) {
            hcf *= i;
            lcm *= i;
            x/=i;
            y/=i;
        }
        while(x%i==0) {
            lcm *= i;
            x/=i;
        }
        while(y%i==0) {
            lcm *= i;
            y/=i;
        }

        i++;
    }

    cout<<"HCF is: " << hcf << " and LCM is: " << lcm;
}

int main() {
    int x,y;
    cout<<"Enter two numbers: ";
    cin>>x>>y;

    hcf_and_lcm(x,y);
}