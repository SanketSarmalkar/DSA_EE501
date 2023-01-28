// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to check if a given number is an Armstrong number.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    int length =0;
    int k = n;
    while(k>0){
      length++;
      k/=10;
    } k = n;
    while(k>0){
       sum += pow(k%10, length);
       k/=10;
    }
    if(n==sum)cout<<"Armstrong number"<<endl;
    else cout<<"not a Armstrong number"<<endl;
    return 0;
}