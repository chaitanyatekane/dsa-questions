// Write a program to print inverted half pyramid using numbers (different)(pattern question)

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=number;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<< " " << j << " ";
        }
        cout<<endl;
    }
    return 0;
}