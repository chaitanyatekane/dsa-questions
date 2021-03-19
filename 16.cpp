// Write a program to print inverted half pyramid (star pattern question)

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}