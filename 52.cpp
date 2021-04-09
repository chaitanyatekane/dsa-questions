// How to delete an element from a specific position from an array (unsorted or sorted)


#include <iostream>
using namespace std;
  
// Function to insert element in arr at position 
int* deleteElement(int n, int arr[], int position)
{
  
    // shift elements backward
    for(int i=position-1; i<=n-1; i++){
        arr[i]=arr[i+1];
    }

    return arr;
}
  
int main()
{
    int n;
    cout<<"Enter Size of Array :- ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements of Array!!\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int position;
  
    // position at which element is to be deleted
    cout<<"Enter Position Where You Want To Delete :- ";
    cin>>position;
  

    if(position<=0 || position>n){
        cout<<"Invalid Position!"<<endl;
    }else{
    // print the original array
    cout<<"Original Array :- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // delete element at position
    deleteElement(n, arr, position);
    n--;
    // print the updated array
    cout<<"Updated Array :- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

    return 0;
}