// Write a program to print 0-1 pattern 

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    for(int i=1;i<=number;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<" 1 ";
            }else{
                cout<<" 0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}