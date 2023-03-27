// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};
int FindMax(node *head){
    int max = INT_MIN;
    while(head!=NULL){
        max = (head->data>max)?head->data:max;
        head = head->next;
    }
    return max;
}
void insertNode(node *&head, int data){
    node *temp = new node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void linkedListUsingStruct(){
    cout<<"Linked List using struct:"<<endl;
    node *head = new node();
    cout<<"Enter the number of nodes: ";
    int n;
    cin>>n;
    cout<<"Enter the data of node 1 : ";
    cin>>head->data;
    int max = INT_MIN;
    for(int i=1;i<n;i++){
        int num;
        cout<<"Enter the data of node "<<i+1<< " : ";
        cin>>num;
        insertNode(head,num);
    }
    cout<<"The maximum element is: "<<FindMax(head)<<endl;
}
void linkedListUsingStlList(){
    cout<<"Linked List using STL List:"<<endl;
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
    int max = INT_MIN;
    for (auto i : List) {
        max = (i>max)?i:max;
    }
    cout<<"The maximum element is: "<<max<<endl;
}

int main(){
    linkedListUsingStruct();
    linkedListUsingStlList();
    return 0;
}