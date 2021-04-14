// Write a program for 2-D array where user will enter number of rows, number of columns and then key, and display whether key is present in 2-D array or not (searching problem)


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout<<"Enter Total Number Of Rows :- ";
    cin>>n;
    cout<<"Enter Total Number Of Columns :- ";
    cin>>m;

    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Enter Key or Element Which You Want To Find :- ";
    cin>>key;

    bool flag=false;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==key){
                cout<<"Found at index "<<"["<<i<<"]"<<"["<<j<<"]"<<"\n";
                flag=true;
            }
        }
    }
    if(flag=true){
        cout<<"Element Found";
    }else{
        cout<<"Element Not Found!";
    }

    return 0;
}