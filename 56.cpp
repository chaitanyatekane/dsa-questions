// Write a program for insertion sort (array can be sorted or unsorted)

// Best Case Time Complexity :- O(n)   [when array is sorted]
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

    // code for insertion sort
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(arr[j]>temp && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }


    cout<<"Updated Array :- \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}