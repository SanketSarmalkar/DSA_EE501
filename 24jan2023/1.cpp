// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C++ Program to add 3 numbers
#include<iostream>
using namespace std;

int main(){
    int a, b, c; // initializing three numbers
    cout<<"Enter the numbers with spaces in between :";
    cin>>a>>b>>c; // input all three numbers respectively
    a += b + c; // adding sum of b and c in a for total sum
    cout<<"the total sum is : ";
    cout<<a<<endl;
    return 0;
}
