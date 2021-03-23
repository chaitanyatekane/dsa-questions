// Write a program to print the ASCII value of any given character

#include<iostream>
using namespace std;

int main(){
    char character;
    cout<<"Enter Any Character :- ";
    cin>>character;

    cout << "ASCII Value Of " << character << " is " << int(character) << endl;
    return 0;
}