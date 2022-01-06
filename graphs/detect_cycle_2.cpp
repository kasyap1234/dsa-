#include<vector>
#include<iostream>
using namespace std ; 
bool checkCycle(int node,int parent, vector<int>&vis,vector<int>adj[]){
    vis[node]=1; 
    for(auto itr: adj[node]){
        if(!vis[itr]){
            if(checkCycle(it,node,vis,adj)){
                return true; 
            }
            else if(it!=parent){
                return true; 
            }
        }
    }
    retrun false; 
}
bool isCycle(int V,vector<int>adj[]){
    vector<int>visited(V+1,0); 
    for(int i=0;i<V+1;i++){
        if(!visited[i]){
            if(checkCycle(i,-1,visited,adj)){
                return true; 
            }
        }
    }
    return false; 
    
}
