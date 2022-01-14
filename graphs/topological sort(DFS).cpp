void findTopoSort(int node,vector<int>&vis,stack<int>&st,vector<int>adj[]){
    vis[node]=1; 
    for(auto it: adj[node]){
        if(!vis[it]){
            findTopoSort(it,vis,st,adj); 
        }
    }
    st.push(node); 
}
vector<int>toposort(int N, vector<int>adj[]){
    stack<int>st; 
    vector<int>vis; 
    for(int i=0;i<N;i++){
        if(!vis[i]){
            findTopoSort(i,vis,st,adj);
        }
    }
    vector<int>ans; 
    while(!st.empty()){
        ans.push_back(st.top()); 
        st.pop();
    }
    return ans; 
    
}
