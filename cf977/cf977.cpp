#include<iostream>
using namespace std;

int main(){
    int i,b;cin >> b >> i;
    while(i>0){
        if(b%10!=0){
            b--;
        }else{
            b /= 10;
        }
        i--;
    }
    cout << b;
}
