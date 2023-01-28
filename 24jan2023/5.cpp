// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute sum and product of digits of a number.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum =0;
    int product =1;
    while(n>0){
      sum += n%10;
      product *= n%10;
      n/=10;
    }
    cout<<"Sum of digit : "<<sum<<endl;
    cout<<"Product of digit : "<<product<<endl;
    return 0;
}