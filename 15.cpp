// Write a program to print a hollow rectangle (star pattern question)

#include<iostream>
using namespace std;

int main(){
    int rows, columns;
    cout<<"Enter Number Of Rows :- ";
    cin>>rows;
    cout<<"Enter Number Of Columns :- ";
    cin>>columns;

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}