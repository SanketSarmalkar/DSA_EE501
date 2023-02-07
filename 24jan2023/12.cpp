// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program to display Pascals Triangle for n lines.

#include <bits/stdc++.h>
using namespace std;

int binomialCoefficient(int row, int col){
    int res = 1;
    if (col > row- col)
    col = row- col;
    for (int i = 0; i < col; ++i){
        res *= (row - i);
        res /= (i + 1);
    }
      
    return res;
}

int main(){
    int n;
    cout<<"Enter no. of lines: ";
    cin>>n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++)
            cout <<" "<< binomialCoefficient(i, j);
        cout <<"\n";
    }
    return 0;
}