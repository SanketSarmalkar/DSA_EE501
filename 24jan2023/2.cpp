// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C++ Program to add n user input numbers.
#include<iostream>
using namespace std;

int main(){
    int n; // no. of user inputs
    cout<<"Enter the number of input by the user:";
    cin>>n;
    int sum=0; // the final sum
    for(int i=0;i<n;i++){
      int t; // number for each input
      cout<<"Enter the "<<i+1<< "number : ";
      cin>>t;
      sum+=t;
    }
    cout<<"The total sum is: ";
    cout<<sum<<endl;
    return 0;
}