// Write a program to print solid butterfly pattern (star pattern question)

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        int space=2*number-2*i;
        for(int j=1;j<=space;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        int space=2*number-2*i;
        for(int j=1;j<=space;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}