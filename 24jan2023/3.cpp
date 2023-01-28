// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute sum of first n natural numbers and sum of squares of first n natural numbers.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    int sum =0;
    int sumOfSquare =0;
    for(int i=1;i<=n;i++){
        sum+=i;
        sumOfSquare+=i*i;      
    }
    cout<<"Sum of first n natural no. : "<<sum<<endl;
    cout<<"Sum of square of first n natural no.: ";
    cout<<sumOfSquare<<endl;
    return 0;
}