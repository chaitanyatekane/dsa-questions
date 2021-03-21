// Write a program to print zig-zag pattern using stars (star pattern question)
/*
rows n=1 to 3
column {(row+column) % 4 == 0}  || {row==2 & column % 4 == 0}
*/

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=number;j++){
            if( ( ( i + j ) % 4 == 0 ) || ( i == 2 && j % 4 == 0 ) ){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}
