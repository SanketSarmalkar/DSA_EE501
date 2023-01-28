// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//Write a C program to display Fibonacci sequence up to n terms.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of first Fibonacci sequence element : ";
    cin>>n;
    int one = 0;
    int two = 1;
    cout<<"first "<<n<< "Fibonacci sequence elements are : ";
    for(int i=0;i<n;i++){
        if(i==0 || i==1)cout<<((i==1)?",":"")<<i;
        else{
            int k = one + two;
            one = two;
            two = k;
            cout<<","<< k;
        }
    }cout<<"."<<endl;
    return 0;
}