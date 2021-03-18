// Write a program to write a simple calculator using switch case statements

#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    cout<<"Enter First Number :- ";
    cin>>n1;
    cout<<"Enter Second Number :- ";
    cin>>n2;

    char op;
    cout<<"Enter Operator :- ";
    cin>>op;

    switch(op){
        case '+':
            cout<<"Addition is :- "<<n1+n2<<endl;
            break;
        case '-':
            cout<<"Subtraction is :- "<<n1-n2<<endl;
            break;
        case '*':
            cout<<"Multiplication is :- "<<n1*n2<<endl;
            break;
        case '/':
            cout<<"Division is :- "<<n1/n2<<endl;
            break;
        default:
            cout<<"You Entered Wrong Operator";
            break;
    }

    return 0;
}