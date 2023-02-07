// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to check if the given number is prime.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
       if(n%i==0){
           cout<<n<<" is not a prime number."<<endl;
           return 0;
       }
    }cout<<n<<" is a prime number."<<endl;
    return 0;
}