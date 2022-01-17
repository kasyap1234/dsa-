#include<iostream>
using namespace std; 

void printAllPaths(vector<int>graph[],int src, int dest,vector<bool>visited,string path){
    if(src==dest){
        cout<<psf<<endl; 
        return ; 
    }
    visited[src]=true; 
    for(auto itr : graph[node]){
        if(!visited[itr]){
            printAllPaths(graph,itr,dest,visited,psf + "itr"); 
        }
    }
    visited[src]=false; 
    
}
