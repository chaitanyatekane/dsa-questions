// Write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them

#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter Number :- ";
    cin>>num;

    if(num%2==0 && num%3==0){
        cout<<"Inputed Number Is Divisible By Both!";
    }else if(num%2==0){
        cout<<"Inputed Number Is Divisible By 2!";
    }else if(num%3==0){
        cout<<"Inputed Number Is Divisible By 3!";
    }else{
        cout<<"Number Is Not Divisible By 2 & 3!";
    }
    
    return 0;
}