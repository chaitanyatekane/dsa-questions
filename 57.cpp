// Write a program for 2-D array where user will enter number of rows, number of columns and elements in 2D array and then print all elements

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

    cout<<"\nMatrix is :- \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}