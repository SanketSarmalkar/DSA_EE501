// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// evaluate the postfix numerical equation
#include<bits/stdc++.h>
using namespace std;
void prints(stack<float>a){
    while(!a.empty()){cout<<a.top()<<" ";
    a.pop();}cout<<endl;
}
int main(){
    string s;
    cout<<"Enter the equation: ";
    cin>>s;
    stack<float>a;
    int ans;
    for(int i=0;i<s.length();i++){
       if(s[i]>='0'&&s[i]<='9'){
          a.push(s[i]-'0');
       }
       if(s[i]=='+'){
          int k = a.top();
          a.pop();
          k=a.top()+k;
          a.pop();
          a.push(k);
       }
       if(s[i]=='-'){
          int k = a.top();
          a.pop();
          k=a.top()-k;
          a.pop();
          a.push(k);
       }
       if(s[i]=='*'){
          int k = a.top();
          a.pop();
          k=a.top()*k;
          a.pop();
          a.push(k);
       }
       if(s[i]=='/'){
          int k = a.top();
          a.pop();
          k=a.top()/k;
          a.pop();
          a.push(k);
       }
       if(s[i]=='^'){
          int k = a.top();
          a.pop();
          k=pow(a.top(),k);
          a.pop();
          a.push(k);
       }
       prints(a);
    }
    cout<<"the answer is : "<<a.top()<<endl;
}