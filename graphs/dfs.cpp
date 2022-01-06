#include<vector>
#include<iostream>
using namespace std; 
void dfs(int node , vector<int>&vis,vector<int>adj[],vector<int>&storeDFS){
    storeDFS.push_back(node); 
    for(auto itr: adj[node]){
        if(!vis[itr]){
            dfs(itr,vis,adj,storeDFS); 
        }
    }
}
vector<int>helper(int V,vector<int>adj[]){
    vector<int>storeDFS; 
    vector<int>vis(V+1,0); 
    for(int i=1;i<V+1; i++){
        if(!vis[i]){
            dfs(i,vis,adj,storeDFS); 
        }
    }
    return storeDFS; 
    
}
