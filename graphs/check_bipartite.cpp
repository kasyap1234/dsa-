#include<iostream>
using namespace std; 
bool checkBipartite(int src,vector<vector<int>>&graph,vector<int>&colour){
  color[src]=1; 
  queue<int>q; 
  q.push(src); 
  while(!q.empty()){
    int node=q.front(); 
    q.pop(); 
    for(auto itr: graph[node]){
      if(color[itr]==-1){
        color[itr]=1- color[node]; 
        q.push(itr); 

      }
      else if(color[itr]==color[node]){
        return false; 
      }
    }
  }

  
  return true; 

}
bool isBipartite(vector<vector<int>>&graph){
  int v=graph.size(); 
  vector<int>color(v-1,-1); 
  for(int i=0;i<v;i++){
    if(color[i]==-1){
      if(!checkBipartite(i,graph,color)){
        return false; 
      }

    }
    return true; 
    
  }
}
