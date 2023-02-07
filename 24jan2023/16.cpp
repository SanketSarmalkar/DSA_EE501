// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to check if a given year is a leap year.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    (n%4==0)?cout<<"It's a leap year":cout<<"It's not a leap year";
    cout<<endl;
    return 0;
}