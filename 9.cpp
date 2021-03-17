// Write a program to print all odd numbers till n(not including n)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number :- ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}