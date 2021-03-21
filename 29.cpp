// Write a program to print diamond using stars (given n, print diamond with 2*n rows) (star pattern question)

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=1;i<=number;i++){
        for(int j=1;j<=number-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=number;i>=1;i--){
        for(int j=1;j<=number-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}