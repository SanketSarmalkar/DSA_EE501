// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// To delete the first element of an array through function.
#include<bits/stdc++.h>
using namespace std;

void insert(int (&a)[5]){
    for(int i=0;i<=3;i++){
       a[i]=a[i+1];
    }return;
}
int main(){
    int a[5] = {1,2,3,4,5};
    cout<<"The original array: ";
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    insert(a);
    cout<<"The array after deleting a[0]: ";
    for(int i=0;i<4;i++){
       cout<<a[i]<<" ";
    }cout<<endl;
}