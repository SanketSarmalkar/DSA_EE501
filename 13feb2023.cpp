#include<bits/stdc++.h>
using namespace std;

union Union{
    int k;
    float l;
};

int main(){
    Union firstUnion;
    firstUnion.k = 4;
    cout<<firstUnion.k<<" "<<firstUnion.l<<endl;
    firstUnion.l = 65.5;
    cout<<firstUnion.k<<" "<<firstUnion.l<<endl;

    return 0;
}