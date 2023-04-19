#include<bits/stdc++.h>
using namespace std;
void PrintList(list<int> List){
    for(auto i : List){
       cout<<i<<" ";
    }cout<<endl;
}

void InsertAtBack(list<int> &List){
    cout<<"data to be inserted at Back: ";
    int data;
    cin>>data;
    List.push_back(data);
}

void InsertInFront(list<int> &List){
    cout<<"data to be inserted in Front: ";
    int data;
    cin>>data;
    List.push_front(data);
}

void InsertInBetween(list<int> &List){
    list<int>::iterator iterate = List.begin();
    int n, data;
    cout<<"Index at which the node is to be inserted: ";
    cin>>n;
    cout<<"Enter the data to be inserted: ";
    cin>>data;
    advance(iterate, n);
    List.insert(iterate, data);

}

void DeleteUsingIterator(list<int> &List){
    list<int>::iterator iterate = List.begin();
    int n, data;
    cout<<"Index at which the node is to be deleted: ";
    cin>>n;
    advance(iterate, n);
    List.erase(iterate);
}

int main(){
    list<int> List;
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cout<<"Enter the data of node "<<i+1<< " : ";
        cin>>num;
        List.push_front(num);
    }
    InsertInFront(List);
    PrintList(List);
    InsertAtBack(List);
    PrintList(List);
    InsertInBetween(List);
    PrintList(List);
    DeleteUsingIterator(List);
    PrintList(List);

}