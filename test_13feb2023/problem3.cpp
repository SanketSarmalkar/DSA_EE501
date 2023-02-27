#include<bits/stdc++.h>
using namespace std;

struct Student{
    int k;
    struct Student *l;
}aditya, abhijeet;

int main(){
    aditya.k = 1;
    aditya.l = &abhijeet;
    abhijeet.k = 2;
    //abhijeet.l = NULL;
    cout<<aditya.k<<endl;
    cout<<aditya.l<<endl;
    cout<<&abhijeet<<endl;
    cout<<abhijeet.k<<endl;
    cout<<abhijeet.l<<endl;
    return 0;
}