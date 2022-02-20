#include<iostream>
using namespace std;
int ans=1; 

int Power(int x,int n){
    
    if(n==0){
        return ans; 

    }
    
        ans=x * Power(x,n-1); 
        return ans; 
        
   
}
int main(){
    cout<<Power(2,3)<<endl;


}

