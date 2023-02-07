// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to swap two numbers without using a third variable.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int firstNo,secondNo;
    cout<<"Enter the first and second no. respectively: ";
    cin>>firstNo>>secondNo;
    firstNo += secondNo;
    secondNo = firstNo - secondNo;
    firstNo = firstNo - secondNo;
    cout<<"No. after swapping are: ";
    cout<<firstNo<<" "<<secondNo<<endl;
    return 0;
}