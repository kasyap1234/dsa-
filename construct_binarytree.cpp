#include<iostream>

using namespace std; 
class Node{
public: 

    int data; 
    Node*left; 
    Node*right; 
    Node(int val){
        data=val; 
        left=NULL; 
        right=NULL; 

    }

}; 
int searchval(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i; 

        }
        // considering the fact that the binary tree only consists of positive integers . 
        return -1; 

    }
}
// inorder printing of the binary tree generated. 

void printTree(Node*root){
    if (root==NULL){
        return; 

    }
    printTree(root->left); 
    cout<<root->data<< endl; 
    printTree(root->right); 



}
Node*buildTree(int preorder[],int inorder[],int start ,int end){
    static int idx=0; 

int curr=preorder[idx]; 
idx++; 
Node*node=new Node(curr); 
if(start>end){
    return NULL; 

}
int pos=searchval(inorder,start,end,curr); 
node->left=buildTree(preorder,inorder,start,pos-1); 
node->right=buildTree(preorder,inorder,pos+1,end); 
return node; 

}
int main(){
    int preorder[]={1,2,4,3,5}; 
    int inorder[]={4,2,1,5,3}; 

    Node*root=buildTree(preorder,inorder,0,4); 
    printTree(root); 
    

}
