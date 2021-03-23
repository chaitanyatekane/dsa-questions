// Write a program to print all prime numbers between given two numbers using function

#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){
    if(num == 0 || num == 1){
        return false;
    }else{
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
    }
}

int main(){
    int num1,num2;
    cout<<"Enter First Number :- ";
    cin>>num1;
    cout<<"Enter Second Number :- ";
    cin>>num2;
    for(int i=num1+1;i<num2;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}