  bool cycleCheck(int node,vector<int>adj[],vector<bool> &visited,vector<bool> &dfsVisited){
         visited[node]=true; 
        dfsVisited[node]=true; 
        for(auto itr: adj[node]){
            if(!visited[itr]){
            if(cycleCheck(itr,adj,visited,dfsVisited)){
                return true; 
            }
            }else if(dfsVisited[itr]){
                return true; 
            }
            
        }
        dfsVisited[node]=false; 
        return false; 
        
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V+1,false); 
        vector<bool>dfsVisited(V+1,false); 
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(checkCycle(i,adj,visited,dfsVisited)){
                    return true; 
                    
                }
            }
        }
        return false; 
        
    }
