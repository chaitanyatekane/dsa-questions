// Write a program for conversion of decimal to binary

#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n){
    int x=1;
    int ans=0;

    while(x<=n){
        x=x*2;
    }
    x=x/2;
    while(x>0){
        int lastDigit = n/x;
        n=n-lastDigit*x;
        x=x/2;
        ans=ans*10 + lastDigit;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter Decimal Value :- ";
    cin>>n;

    cout<<decimalToBinary(n)<<endl;
    return 0;
}