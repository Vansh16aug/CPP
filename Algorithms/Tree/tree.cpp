#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val=data;
        left=NULL;
        right=NULL;
    }
};
Node* buildTree(){
    int data;
    cout<<"Enter data for tree :";
    cin>>data;

    if(data==-1){
        return NULL;
    }
    Node* new_node=new Node(data);
    new_node->left=buildTree();
    new_node->right=buildTree();
    return new_node;
}

int main()
{
    
    Node* root=buildTree();
    return 0;
}