#include<iostream>
using namespace std;
int main( ){
    for(int i=1; i<=500; i++){
        int x = 0, tem = i;
        while (tem > 0)
        {
            int digit = tem%10;
            x += digit * digit * digit;
            tem /= 10;
        }
        if(i==x){
            cout<<i<<endl;
        }
        
    }
    return 0;
}
