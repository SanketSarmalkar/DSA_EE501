// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to check if a number is a palindrome.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int one,i=0;
    cout<<"Enter the number : ";
    cin>>one;
    int a[10];
    while(one>0){
       a[i]=one%10;
       one/=10;
       i++;
    }i--;
    for(int t=0;t<(i+1)/2;t++){
        if(a[t]!=a[i-t]){cout<<"not a palindrome"<<endl;return 0;}
    }cout<<"is a palindrome"<<endl;

    return 0;
}