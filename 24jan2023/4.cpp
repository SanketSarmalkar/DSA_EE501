// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute product of n numbers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no. of user inputs: ";
    cin>>n;
    int totalProduct = 1;
    for(int i=0;i<n;i++){
        int t;
       cout<<"Enter the "<<i<< " number: ";
       cin>>t;
       totalProduct*=t;
    }
    cout<<"Total product : "<<totalProduct<<endl;
    return 0;
}