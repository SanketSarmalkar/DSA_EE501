// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute factorial of a given number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int factorial = 1;
    if(n<=1)cout<<1<<endl;
    else{
        while(n>1){
           factorial*=n;
           n--;
        }
        cout<<"The factorial of the number is: ";
        cout<<factorial<<endl;
    }
    return 0;
}