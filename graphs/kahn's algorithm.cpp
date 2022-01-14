vector<int>toposort(int N,vector<int>adj[]){
    queue<int>q; 
    vector<int>indegree(N,0); 
    for(int i=0;i<N;i++){
        for(auto itr : adj[i]){
            indegree[itr]++; 
        }
    }
    for(int i=0;i<N;i++){
        if(indegree[i]==0){
            q.push(i); 

        }
    }
    vector<int>ans; 
    while(!q.empty()){
        int node=q.front(); 
        ans.push_back(node); 
        for(auto it: adj[node]){
            indegree[it]--; 
       if(indegree[it]==0){
           q.push(it); 
       }
        }
    }
    return ans; 
    
}
