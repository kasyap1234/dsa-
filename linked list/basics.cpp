#include<iostream>
using namespace std; 



class Node{
    public: 

    int data; 
    Node* next; 

}; 
void print(Node* node){
    while(node!=NULL){
        cout<<node->data<<"-"; 
        node=node->next; 
    }

}
int main(){
    // create a linked list with four nodes . 
    Node*head=new Node(); 
    head->data=1; 
    Node*second=new Node(); 
    Node*third=new Node(); 
    Node*fourth=new Node(); 
    head->next=second; 
    second->data=2; 
    second->next=third; 
    third->data=3; 
    third->next=fourth; 
    fourth->data=4; 
    fourth->next=NULL; 
   print(head); 
   

}
