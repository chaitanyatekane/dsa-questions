// Write a program to print solid rhombus pattern (star pattern question)

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
        for(int j=1;j<=number;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}