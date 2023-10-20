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
class DoublyLinkedList{
public:
    Node* head;
    Node* tail;
    DoublyLinkedList(){
        head=NULL;
        tail=NULL;
    }
    void insertionAtEnd(int val){
        Node* new_node=new Node(val);
        if(tail==NULL){
            head=new_node;
            tail=new_node;
            return;
        }
        tail->next=new_node;
        new_node->prev=tail;
        tail=new_node;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"<->";
            temp=temp->next;
        }
    }
};
int main()
{
    DoublyLinkedList dll;
    // dll.insertionAtEnd(1);
    // dll.insertionAtEnd(2);
    // dll.insertionAtEnd(3);
    // dll.insertionAtEnd(4);
    // dll.insertionAtEnd(5);
    int n,data;
    cout<<"Enter the number of elements :";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>data;
        dll.insertionAtEnd(data);
    }
    dll.display();
    return 0;
}