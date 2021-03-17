//  Write a program to check if a given number is prime or not

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;

    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not Prime Number";
            break;
        }
    }
    if(i==n){
        cout<<"Number Is Prime"<<endl;
    }
    return 0;
}