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
// if the new node is to be inserted at the head of the linked list ; 

Node* insert_head(Node*head,int new_data){
    Node*new_node=new Node(); 
    new_node->data=new_data; 
    new_node->next=head; 
    head=new_node; 
     return head; 

}
void  insertAfter(Node*prev_node,int new_data){
    // check if previous node is NULL; 
    if(prev_node==NULL){
        return prev_node; 
        //i.e we return NULL; as previous node cannot be NULL; 
        // it will be similar to inserting at the head of the linked list ; 

    }
    Node*new_node=new Node(); 
    new_node->data=new_data; 
    new_node->next=prev_node->next; 
    prev_node->next=new_node; 
    
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
