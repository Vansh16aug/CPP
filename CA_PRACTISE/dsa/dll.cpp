#include<bits/stdc++.h>
using namespace std;
class Node{
        public:
        int val;    
        Node* prev;
        Node* next;

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

        void insertionAtStart(int val){
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
        void insertionatK(int val , int pos)
        {
            Node* temp=head;
            int count=1;
            while(count<(pos-1)){
                temp=temp->next;
                count++;
            }
            Node* new_node=new Node(val);
            //next
            new_node->next=temp->next;
            temp->next=new_node;
            //prev
            new_node->prev=temp;
            new_node->next->prev=new_node;
            return;
        }
        void deleteEnd(){
            Node* temp=tail;
            tail=tail->prev;
            tail->next=NULL;
            free(temp);
        }
        void deleteStart(){
            Node* temp=head;
            head=head->next;
            free(temp);
        }
        void deleteAtK(int pos){
            if(pos==0){
                deleteStart();
            }
            Node* temp=head;
            int counter=1;
            while(counter<pos){
                temp=temp->next;
                counter++;
            }
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            free(temp);
        }
        void ForTraversal(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->val<<"<->";
                temp=temp->next;
            }
        }
        void BackTraversal(){
            Node* temp=tail;
            while(temp!=NULL){
                cout<<temp->val<<"<->";
                temp=temp->prev;
            }
        }
    };
int main()
{
    DoubleLinkedList dll;
    dll.insertionAtStart(1);
    dll.insertionAtStart(2);
    dll.insertionAtStart(3);
    dll.insertionAtStart(4);
    dll.insertionAtStart(5);    //5 4 3 2 1
    dll.deleteStart();
    dll.deleteEnd();
    dll.ForTraversal();     //4 3 2
    return 0;
}
