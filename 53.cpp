// Write a program for selection sort (array can be sorted or unsorted)

// Best Case Time Complexity :- O(n^2)
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

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    cout<<"Updated Array :- \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}