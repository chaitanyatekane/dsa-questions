// Write a program for checking whether a character array is palindrome or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size :- ";
    cin>>n;

    char arr[n+1];
    cout<<"Enter Character Array :- ";
    cin>>arr;

    bool check=true;
    for(int i=0; i<n; i++){
        if(arr[i] != arr[n-i-1]){
            check = false;
            break;
        }
    }
    if(check == true){
        cout<<"Inputed Character Array is Palindrome!!";
    }else{
        cout<<"Inputed Character Array is Not Palindrome!!";
    }
    
    return 0;
}