// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// infix to postfix using stack
#include<bits/stdc++.h>
using namespace std;
//(*/+-
bool check(char l,stack<char>s){
    if(l=='^'){
       return 0;
    }
    if((l=='*'||l=='/')&&(s.top()=='+'||s.top()=='-')){
       return 0;
    }
    else if((s.top()=='*'||s.top()=='/')&&(l=='+'||l=='-')){
       return 1;
    }
    if(s.top()=='('){
      return 0;
    }
    return 1;
}
void prints(char k,stack<char>s, string ans){
   cout<<k<<" ";
   while(!s.empty()){
      cout<<s.top();
      s.pop();
   }cout<<" "<<ans<<endl;
}

int main(){
    string k;
    stack<char> a;
    cout<<"Enter the equation:";
    cin>>k;
    string ans="";
    for(int i=0;i<k.length();i++){
      if(k[i]=='(')a.push(k[i]);
      else if(k[i]==')'){
         while(a.top()!='('){
           ans+=a.top();
           a.pop();
         }a.pop();
      }
      else if((k[i]>='a'&& k[i]<='z') ||(k[i]>='A'&& k[i]<='Z')||(k[i]>='0'&& k[i]<='9')){
          ans+=k[i];
       }
      else if((k[i]=='*'||k[i]=='/'||k[i]=='+'||k[i]=='-'||k[i]=='^')){
          if(a.empty())a.push(k[i]);
          else{
            if(check(k[i],a)){
                while(!a.empty()&&a.top()!='('){
                   ans+=a.top();
                   a.pop();
                }
                a.push(k[i]);
            }
            else a.push(k[i]);

          }
       }
       prints(k[i],a,ans);
    }
    while(!a.empty()){
        ans+=a.top();
        a.pop();
    }
    cout<<"The postfix is: "<<ans<<endl;
}