// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// implement stack using array
#include<bits/stdc++.h>
using namespace std;
void push(int (&a)[100], int &indicator, int data){
    if(indicator==100){cout<<"Array is full:"<<endl;return;}
    a[indicator] = data;
    indicator++;
    return;
}
void pop(int (&a)[100], int &indicator){
    if(indicator==0){cout<<"Array is empty."<<endl;return;}
    a[indicator]=0; // can be left as it is.
    indicator--;
    return;
}
void print(int a[100], int indicator){
    if(indicator==0){cout<<"Array is empty."<<endl;return;}
   for(int i=0;i<indicator;i++)cout<<a[i]<<" ";
    cout<<endl; return;
}
int main(){
    int a[100],indicator =0;
    push(a,indicator,24);
    print(a,indicator);
    push(a,indicator,34);
    print(a,indicator);
    pop(a,indicator);
    print(a,indicator);
    push(a,indicator,45);
    print(a,indicator);
    pop(a,indicator);
    print(a,indicator);
    return 0;
}