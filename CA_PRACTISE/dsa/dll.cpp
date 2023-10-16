#include<bits/stdc++.h>
using namespace std;
int main()
{
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
        }
    };
    return 0;
}
