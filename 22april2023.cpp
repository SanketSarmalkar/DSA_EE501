// Roll no.: 20EEE1028
// Name : Sanket S.Sarmalkar
// Implementation of BFS and DFS using Adjacency Matrix
#include<bits/stdc++.h>
using namespace std;

void BreadthFirstSearch(vector<vector<int>> adjMatrix,int start){
  int vertices = adjMatrix.size();
  vector<bool> visited(vertices,false);
  queue<int> q;
  q.push(start);
  visited[start] = true;
  while(!q.empty()){
    int current = q.front();
    q.pop();
    cout<<current<<" ";
    for(int i=0;i<vertices;i++){
      if(adjMatrix[current][i]==1 && visited[i]==false){
        q.push(i);
        visited[i] = true;
      }
    }
  }
}

void DepthFirstSearch(vector<vector<int>> adjMatrix,int start){
  int vertices = adjMatrix.size();
  vector<bool> visited(vertices,false);
  stack<int> s;
  s.push(start);
  visited[start] = true;
  while(!s.empty()){
    int current = s.top();
    s.pop();
    cout<<current<<" ";
    for(int i=0;i<vertices;i++){
      if(adjMatrix[current][i]==1 && visited[i]==false){
        s.push(i);
        visited[i] = true;
      }
    }
  }
}

int main(){
  int vertices,edges;
  cout<<"Enter the number of vertices: ";
  cin>>vertices;
  cout<<"Enter the number of edges: ";
  cin>>edges;
  vector<vector<int>> adjMatrix(vertices,vector<int>(vertices,0));
  for(int i=0;i<edges;i++){
    cout<<"Enter the edge "<<i+1<<": ";
    int u,v;
    cin>>u>>v;
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
  }
    cout<<"Adjacency Matrix:"<<endl;
    for(int i=0;i<vertices;i++){
      for(int j=0;j<vertices;j++){
        cout<<adjMatrix[i][j]<<" ";
      }
      cout<<endl;
    }
    cout<<"BFS Traversal:"<<endl;
    int start;
    cout<<"Enter the starting vertex: ";
    cin>>start;
    BreadthFirstSearch(adjMatrix,start);
    cout<<endl;
    cout<<"DFS Traversal:"<<endl;
    DepthFirstSearch(adjMatrix,start);
    cout<<endl;
}