#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int data){
        val=data;
        next=NULL;
        prev=NULL;
    }
};
class DoubleLinkedList{
    public:
    Node* head;
    Node* tail;

    DoubleLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertionatStart(int val){
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        new_node->next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    void insertionatEnd(int val){
        Node*new_node=new Node(val);
        if(tail!=NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
        return;
    }
    void deleteatStart(){
        Node*temp=head;
        head=head->next;
        head->prev=NULL;
    }
    void deleteatEnd(){
        // Node*temp=tail;
        // tail=tail->prev;
        // tail->next=NULL;
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }// we are at the last node
        temp->prev->next=NULL;
    }
    void deleteatK(int pos){
        Node*prev=head;
    }
    void display(){
        Node* temp=head;
        cout<<"LinkedList is : ";
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
    }
    void displayAfterOperation(){
        Node* temp=head;
        cout<<"LinkedList after operation is : ";
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
    }
};
int main(){
    DoubleLinkedList ddl;
    ddl.insertionatStart(1);
    ddl.insertionatStart(2);
    ddl.insertionatStart(3);
    ddl.insertionatStart(4);
    ddl.display();
    cout<<endl;
    // ddl.deleteatStart();
    // ddl.deleteatEnd();
    // ddl.displayAfterOperation();
    ddl.deleteatK(3);
    return 0;
}