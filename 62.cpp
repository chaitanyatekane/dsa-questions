// Write a program for swapping of two numbers using pointers

#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int a=2, b=4;
    cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
    cout<<"After Swapping\n";
    swap(&a, &b);
    cout<<"Value of a is "<<a<<" and b is "<<b<<endl;
    return 0;
}