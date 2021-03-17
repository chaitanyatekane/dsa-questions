// Program to add only positive numbers

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Integer :- ";
    cin>>n;
    int sum=0;
    while(n>=0){
        sum=sum+n;
        cout<<"Enter Integer :- ";
        cin>>n;
    }
    cout<<"Sum :- "<<sum;

    return 0;
}