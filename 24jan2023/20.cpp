// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to display factors of a given number.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    cout<<"The factors of the no. are as follows: ";
    for(int i=1;i<=n;i++){
       if(n%i==0)cout<<i<<" ";
    }cout<<endl;
    return 0;
}