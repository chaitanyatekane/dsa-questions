// Write a program for linear search i.e. user will enter size and elements of array and then user will enter key which user want to find in those elements of array and if key is found then it should return the index of that particular element which is found and if key is not found then it should return -1

#include<iostream>
using namespace std;

// Time Complexity of Linear Search is O(n)

int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter Size of Array :- ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of Array!!\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter Element/Key Which You Want To Find :- ";
    cin>>key;

    cout<<"Index of Key/Element is :- "<<linearSearch(arr, n, key);

    return 0;
}
