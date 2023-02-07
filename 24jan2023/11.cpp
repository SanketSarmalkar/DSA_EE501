// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Write a C program to compute sum of first 50 prime numbers.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int noOfPrimeNo = 1;
    int naturalNoInterator = 2;
    while(noOfPrimeNo<=50){
        bool k=1;
       for(int i=2;i<=sqrt(naturalNoInterator);i++){
          if(naturalNoInterator%i==0){
            k=0;
            continue;
          }
       }
       if(k){
        sum+=naturalNoInterator;
        noOfPrimeNo++;
       }
       naturalNoInterator++;
    }cout<<"The sum of First 50 Prime no. is:";
    cout<<sum<<endl;
    return 0;
}