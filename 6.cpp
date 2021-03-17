// Program to find sum of natural numbers till n(not including that number)

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number Till Which You Wanna Find Sum :- ";
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=sum+i;
    }
    cout<<"Sum :- "<<sum;
    return 0;
}