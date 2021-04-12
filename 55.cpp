// Write a program for optimized bubble sort (array can be sorted or unsorted)

// Best Case Time Complexity :- O(n)
// Worst Case Time Complexity :- O(n^2)

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

    // optimized version of bubble sort
    for(int i=0;i<n-1;i++){
        int boolean=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                boolean=1;
            }
        }
        // if no elements were swap by inner for loop then 
        if(boolean==0){
            break;
        }
    }

    cout<<"Updated Array :- \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}