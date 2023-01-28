// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute sum of first n Fibonacci terms.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no. of first Fibonacci sequence element : ";
    cin>>n;
    int one = 0,two = 1,sum = 1;
    cout<<"The sum of first "<<n;
    cout<<" numbers of fibonacci series are : ";
    if(n==0 || n==1){
            cout<<n<<endl;
            return 0;
    }
    for(int i=2;i<n;i++){
        int k = one + two;
        one = two;
        two = k;
        sum+=k;
    }cout<<sum<<endl;
    return 0;
}