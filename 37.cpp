// Write a program to find the binary coefficient (nCr) using function

#include<iostream>
using namespace std;


int fact(int num){
    int factorial = 1;
    for(int i=2;i<=num;i++){
        factorial = factorial * i;
    }
    return factorial;
}

int main(){
    int n, r;
    cout<<"Enter value of 'n' :- ";
    cin>>n;
    cout<<"Enter value of 'r' :- ";
    cin>>r;

    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;
    return 0;
}

