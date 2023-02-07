// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Insertion of a node in an array
#include<iostream>
using namespace std;

int main(){
    int a[100],element, position,n;
    cout<<"size of original array: ";
    cin>>n;
    for(int i=0;i<n;i++){
       cout<<"Enter the "<<i+1<<" element: ";
       cin>>a[i];
    }
    cout<<"Position of the new element: ";
    cin>>position;
    cout<<"Enter the element: ";
    cin>>element;
    for(int i=n;i>position-1;i--){
       a[i] = a[i-1];
    }
    a[position-1] = element;
    for(int i=0;i<n+1;i++){
       cout<<a[i]<<" ";
    }cout<<endl;
    return 0;
}
