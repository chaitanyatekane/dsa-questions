// Write a program for binary search i.e. user will enter size and elements of array and then user will enter key which user want to find in those elements of array and if key is found then it should return the index of that particular element which is found and if key is not found then it should return -1 (note that array is sorted)

#include<iostream>
using namespace std;

// Time Complexity of Binary Search is O(log n)

int binarySearch(int arr[], int n, int key){
    int startingPoint = 0;
    int endingPoint = n;
    while(startingPoint<=endingPoint){
        int midPoint=(startingPoint+endingPoint)/2;

        if(arr[midPoint]==key){
            return midPoint;
        }
        else if(arr[midPoint]>key){
            endingPoint=midPoint-1;
        }
        else{
            startingPoint=midPoint+1;
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

    cout<<"Index of Key/Element is :- "<<binarySearch(arr, n, key);

    return 0;
}