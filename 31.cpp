// Write a program to reverse a number

#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    int reverse = 0;
    while(number>0){
        int lastdigit = number % 10;
        reverse = reverse * 10 + lastdigit;
        number = number / 10;
    }
    cout<<"Reversed Number :- "<<reverse<<endl;
    return 0;
}