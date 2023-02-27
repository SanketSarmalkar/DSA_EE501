// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// implement vector
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }cout<<endl;
}
void printq(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }cout<<endl;
}
void prints(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}
int main(){
    cout<<":::::THE VECTOR:::::"<<endl;
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(6);
    print(a);
    vector<int>::iterator iterate = a.begin();
    a.erase((++(++iterate)));cout<<"element in the 2 index is deleted."<<endl;
    print(a);
    a.pop_back();cout<<"poping element"<<endl;
    print(a);
    a.clear();//clearing the vector
    if(a.empty())cout<<"the vector is empty"<<endl;
    else cout<<"the vector is not empty"<<endl;

    cout<<":::::THE QUEUE:::::"<<endl;
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    printq(q);
    q.pop();
    cout<<"The first element in queue is: "<<q.front()<<endl;
    cout<<"the last to leave element is: "<<q.back()<<endl;
    cout<<"After popping a element we have "<<q.size()<<" elements."<<endl;

    cout<<":::::THE STACK:::::"<<endl;
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    prints(s);
    s.pop();
    cout<<"The first element in queue is: "<<s.top()<<endl;
    cout<<"After popping a element we have "<<s.size()<<" elements."<<endl;

}