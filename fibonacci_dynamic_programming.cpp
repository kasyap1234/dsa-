#include<iostream>
using namespace std;
int fib(int n){
    int memo[n+2]; 
    memo[0]=0; 
    memo[1]=1; 
    for(int i=2;i<=n;i++){
        memo[i]=0; 
        
    }
    for(int i=2;i<=n;i++){
       memo[i]=memo[i-1]+ memo[i-2]; 
    }
    return memo[n]; 


}
int main(){
  cout<< fib(4)<<endl; 
   


}
