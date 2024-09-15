#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int lastDigit = 0;
    int reverse = 0;
    int sum = 0;
    while(n>0){
        lastDigit = n%10;
        reverse *= 10;
        sum += lastDigit;
        reverse += lastDigit;
        n/=10;
    }
    cout<<" sum of given number is " <<sum<< " and its reverse is "<<reverse;
}
