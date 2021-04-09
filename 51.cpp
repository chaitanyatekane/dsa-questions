// How to insert an element at a specific position in an array (unsorted or sorted)


#include <iostream>
using namespace std;
  
// Function to insert element in arr at position 
int* insertElement(int n, int arr[], int element, int position)
{
    // increase the size by 1
    n++;
  
    // shift elements forward
    for(int i=n; i>=position; i--)
        arr[i]=arr[i-1];
  
    // insert element at position
    arr[position-1] = element;
  
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

    int element, position;
  
    // element to be inserted
    cout<<"Enter The Element Which You Want To Insert :- ";
    cin>>element;
  
    // position at which element is to be inserted
    cout<<"Enter Position Where You Want To Insert :- ";
    cin>>position;
  

    if(position<=0 || position>n+1){
        cout<<"Invalid Position!"<<endl;
    }else{
    // print the original array
    cout<<"Original Array :- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    // Insert element at position
    insertElement(n, arr, element, position);
  

    // print the updated array
    cout<<"Updated Array :- ";
    for(int i=0; i<n+1; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }

  
    return 0;
}