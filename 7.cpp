// Program to display multiplication table upto 10

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Positive Number Of Which You Want Multiplication Table Of :- ";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}