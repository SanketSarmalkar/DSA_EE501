// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
//  Write a C program for addition and multiplication of two matrices. Also compute transpose of a matrix.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int row1,col1,row2,col2;
    cout<<"Enter no. of rows in first matrix: ";
    cin>>row1;
    cout<<"Enter no. of columns in first matrix: ";
    cin>>col1;
    cout<<"Enter no. of rows in second matrix: ";
    cin>>row2;
    cout<<"Enter no. of columns in second matrix: ";
    cin>>col2;
    int matrix1[row1][col1],matrix2[row2][col2];
    cout<<"Enter the elements of First matrix respectively: "<<endl;
    for(int i=0;i<row1;i++){
       for(int j=0;j<col1;j++){
          cin>>matrix1[i][j];
       }
    }
    cout<<"Enter the elements of second matrix respectively: "<<endl;
    for(int i=0;i<row2;i++){
       for(int j=0;j<col2;j++){
          cin>>matrix2[i][j];
       }
    }
    // multiplication
    int multi[row1][col2];
    if(col1==row2){
       for(int i=0;i<row1;i++){
          for(int j=0;j<col2;j++){
            int l = 0;
             for(int k=0;k<col1;k++){
                l+= matrix1[i][k]*matrix2[k][j];
             }
             multi[i][j]=l;
       }
    }
    cout<<"After multiplication: "<<endl;
       for(int i=0;i<row1;i++){
          for(int j=0;j<col2;j++){
             cout<<multi[i][j]<<" ";
          }cout<<endl;
       }
    }else{cout<<"Multiplication is not possible."<<endl;}
    //addition
    if(row1==row2 && col1==col2){
       int add[row1][col1];
       for(int i=0;i<row1;i++){
           for(int j=0;j<col1;j++){
              add[i][j]=matrix1[i][j]+matrix2[i][j];
           }
       }cout<<"After Addition: "<<endl;
       for(int i=0;i<row1;i++){
          for(int j=0;j<col1;j++){
             cout<<add[i][j]<<" ";
          }cout<<endl;
       }
    }else{cout<<"Addition is not possible."<<endl;}
    cout<<"Transpose of matrix 1: "<<endl;
    for(int i=0;i<col1;i++){
       for(int j=0;j<row1;j++){
           cout<<matrix1[j][i]<<" ";
       }cout<<endl;
    }cout<<"Transpose of matrix 2 : "<<endl;
    for(int i=0;i<col2;i++){
       for(int j=0;j<row2;j++){
           cout<<matrix2[j][i]<<" ";
       }cout<<endl;
    }


    return 0;
}