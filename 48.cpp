// Write a program for array in which user will enter the size of array and elements of array, and then display the maximum and minimum element from that inputed array of elements

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array :- ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of Array!!\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int minNo=INT_MAX;
    int maxNo=INT_MIN;

    for(int i=0;i<n;i++){
        maxNo=max(maxNo, arr[i]);
        minNo=min(minNo, arr[i]);
    }

    cout<<"\nMaximum Number = "<<maxNo;
    cout<<"\nMinimum Number = "<<minNo;

    return 0;
}