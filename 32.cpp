// Write a program to check if a given number is armstrong number or not

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter Number :- ";
    cin>>number;

    int sum = 0;
    int originalnumber = number;
    while(number>0){
        int lastdigit = number % 10;
        sum += pow(lastdigit, 3);
        number = number / 10;
    }
    if(sum==originalnumber){
        cout<<"Armstrong Number!"<<endl;
    }else{
        cout<<"Not an Armstrong Number!"<<endl;
    }
    return 0;
}