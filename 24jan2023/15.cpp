// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to compute minimum and maximum numbers out of n numbers.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of numbers: ";
    cin>>n;
    int A[n];
    int mi = INT_MAX;
    int ma = INT_MIN;
    for(int i=0;i<n;i++){
       cout<<"Enter number "<<i+1<<" : ";
       cin>>A[i];
       if(mi>A[i]){
           mi=A[i];
       }
       if(ma<A[i]){
          ma=A[i];
       }
    }
    cout<<"The lowest number is : "<<mi<<endl;
    cout<<"The highest number is : "<<ma<<endl;
    return 0;
}