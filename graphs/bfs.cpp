#include<iostream>
#include<vector>
#include<queue>

using namespace std; 
vector<int>bfsOfGraph(int V, vector<int>adj[]){
vector<int>bfs; 
vector<int>visited(V-1,0); 
for(int i=0;i<v;i++){
    if(visited[i]==0){
        queue<int>q; 
        q.push(i); 
        visited[i]=1; 

        while(!qu.empty()){
            int node=q.front(); 
            q.pop(); 
            bfs.push_back(node); 
            for(auto itr : adj[node]){
                if(!visited[itr]){
                    q.push(itr); 
                    visited[itr]=1; 

                }

            }
        }
    }
    
}
return bfs; 



}
