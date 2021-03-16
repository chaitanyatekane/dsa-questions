// Program to check if a triangle is scalene, isosceles or equilateral

#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"Enter First Side Of Triangle :- ";
    cin>>a;
    cout<<"Enter Second Side Of Triangle :- ";
    cin>>b;
    cout<<"Enter Third Side Of Triangle :- ";
    cin>>c;

    if(a==b && b==c){
        cout<<"Triangle Is Equilateral Triangle!";
    } else if(a==b || b==c || a==c){
        cout<<"Triangle Is Isosceles Triangle!";
    }else{
        cout<<"Triangle Is Scalene Triangle";
    }

    return 0;
}