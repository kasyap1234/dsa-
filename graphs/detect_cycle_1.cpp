
#include<iostream>
using namespace std; 
bool checkCycle(int s,int V,vector<int>adj[],vector<bool>&visited){
    queue<pair<int,int>>q; 
    q.push({s,-1}); 
    // s is the source of the graph or the starting node of the graph . 
    while(!q.empty()){
        int node=q.front().first; 
        int parent=q.front().second; 
        q.pop(); 
        for(auto itr: adj[node]){
            if(!visited[itr]){
                visited[itr]=true; 
                q.push({itr,node}); 


            }else if(itr!=parent){
                return true; 
            }

        }
    }
    return false; 

}
bool is_cycle(int V,vector<int>adj[]){
    vector<bool>visited(V+1,false); 
    for(int i=1;i<V+1;i++){
        if(!visited[i]){
            if(checkCycle(i,V,adj,visited)){
                return true; 
            }
        }
    }
    return false; 
}
