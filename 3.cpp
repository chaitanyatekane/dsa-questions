// Program to find maximum among three numbers

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter First Number :- ";
    cin>>a;
    cout<<"Enter Second Number :- ";
    cin>>b;
    cout<<"Enter Third Number :- ";
    cin>>c;

    if(a>b){
        if(a>c){
            cout<<"First Number is Greater & Number is "<<a;
        }else{
            cout<<"Third Number is Greater & Number is "<<c;
        }
    }else if(b>a){
            if(b>c){
                cout<<"Second Number is Greater & Number is "<<b;
            }else{
                cout<<"Third Number is Greater & Number is "<<c;
            }
    }else{
        cout<<"All Three Numbers Are Equal";
    }
    return 0;
}