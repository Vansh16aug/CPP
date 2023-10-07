#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int key;
    Node* left;
    Node* right;

    Node(int key){
        this->key=key;
        left=right=NULL;
    }
};
Node* insert(Node* root,int key){
    if(root==NULL){     // if empty then create one
        return new Node(key);
    }
    if(key<root->key){      // if root>key then use left
        root->left=insert(root->left,key);
    }
    else{       // if root<key then use right
        root->right=insert(root->right,key);
    }
    return root;
}

void inOrder(Node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->key<<" ";
    inOrder(root->right);
}
int main()
{
    Node* root=NULL;
    int arr[]={8,3,10,1,6,14,4,7,13};
    for(int x:arr){     // traversing through array
        root=insert(root,x);
    }
    inOrder(root);
    return 0;
}