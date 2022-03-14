#include<iostream>
#include<math.h>
#include<sstream>
using namespace std;

int binary_to_decimal(string binaryInteger) {
    int count = 0;
    int sum = 0;

    int num = stoi(binaryInteger); //string to integer (stoi)  //integer to string (to_string())
    // stringstream obj;
    // obj << binaryInteger;
    // obj >> num;

    while(num>0) {
        int result = num%10;
        int power = pow(2,count);
        int res = result*power;
        sum += res;
        count++;
        num/=10;
    }
    return sum;
}

int main() {
    string number;
    cout<<"Enter a decimal number: ";
    cin>>number;
    cout<<"The decimal conversion of " << number << " is: " << binary_to_decimal(number) << endl;
}