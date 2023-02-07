// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to find LCM of two numbers.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int one,two;
    cout<<"Enter the first no.: ";
    cin>>one;
    cout<<"Enter the second no.: ";
    cin>>two;
    int i=max(one,two);
    bool k=true;
    while(k){
       if(i%one==0 && i%two==0){
          k=false;
          break;
       }
       i++;
    }cout<<"The LCM is : "<<i<<endl;

    return 0;
}