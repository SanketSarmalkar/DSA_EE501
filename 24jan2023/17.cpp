// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to find GCD of two numbers.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int one,two;
    cout<<"Enter the first no.: ";
    cin>>one;
    cout<<"Enter the second no.: ";
    cin>>two;
    int i=min(one,two);
    bool k=true;
    while(k){
       if(one%i==0 && two%i==0){
          k=false;
          break;
       }
       i--;
    }cout<<"The GCD is : "<<i<<endl;

    return 0;
}