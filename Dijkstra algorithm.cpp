#include<iostream>
using namespace std; 
#include<limits.h>
#define V 9
int mindistance(int dist[],bool visit[]){
    int min=INT_MAX; 
    int minIndex; 
    for(int i=0;i<V;i++){
        if(visit[i]==false and dist[i]<=min){
            min=dist[i]; 
            minIndex=i; 
        }
        
    }
    return minIndex; 


}
void dijkstra(int graph[V][V],int source){
    int dist[V]; 
    bool visit[V]; 
    for(int i=0;i<V;i++){
        dist[i]=INT_MAX; 
        visit[i]=false; 

    }
    dist[source]=0; 
    for(int i=0;i<V-1;i++){
        // every time pick up the node with the shortest distance ; 
        int u=mindistance(dist,visit); 
        visit[u]=true; 
        for(int j=0;j<V;j++){
            if(visit[j]==false and graph[u][j] and dist[u]!=INT_MAX and dist[u] + graph[u][j]<dist[j] ){
                dist[j]=dist[u] + graph[u][j]; 


            }
        }
    }
}

    int main()
{
   
  
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 
    dijkstra(graph, 0);
 
    return 0;
}
