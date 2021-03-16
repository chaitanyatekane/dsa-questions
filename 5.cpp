// Program to check if an alphabet is a vowel or a consonant

#include<iostream>
using namespace std;

int main(){
    char n;
    cout<<"Enter Vowel or Consonant Character :- ";
    cin>>n;

    if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
        cout<<"You Entered An Vowel!";
    }else{
        cout<<"You Entered An Consonant!";
    }
    return 0;
}