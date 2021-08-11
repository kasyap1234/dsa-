#include<iostream>
using namespace std; 
# define n 50; 
class stack{
    int *array; 
    int top; 
    public: 
    stack(){
    array=new int[n]; 

    int top=-1; 
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack is full "<<endl; 
                    }
        else{
            top++; 
            array[top]=x; 

        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack is empty"<<endl; 
                    }
        else{
            
            top--; 
            
        }

    }
    int top(){
        if(top==-1)
        cout<<"stack is empty "<<endl; 
        
        return array[top]
    }


}; 
