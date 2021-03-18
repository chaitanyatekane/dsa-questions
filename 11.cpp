// Write a program to print all prime numbers between two numbers

#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter First Number :- ";
    cin>>a;
    cout<<"Enter Second Number :- ";
    cin>>b;

    for(int num=a+1;num<b;num++){
        int i;
        for(i=2;i<num;i++){
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
}