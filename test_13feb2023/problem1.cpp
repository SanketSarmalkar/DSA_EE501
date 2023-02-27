// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// To insert values in a array with is initialized in main() through a function.

#include<bits/stdc++.h>
using namespace std;

void insert(int (&a)[5]){
    cout<<"Enter the elements of the Array: "<<endl;
    for(int i=0;i<5;i++){
       cin>>a[i];
    }
}

int main(){
    int a[5];
    insert(a);
    cout<<"The array is as follows: ";
    for(int i=0;i<5;i++){
       cout<<a[i]<<" ";
    }cout<<endl;
}