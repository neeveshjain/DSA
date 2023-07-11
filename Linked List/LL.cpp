// A linked list is a linear data structure that consists of nodes, 
// where each node contains a value and a pointer/reference to the
// next node in the list. Unlike arrays, linked lists do not require 
// contiguous memory allocation. Instead, they use dynamic memory 
// allocation to create nodes as needed.
//Linked List is created using basic pointers in cpp
//Basic linkedList creation , traversing and printing elements from linked list.
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

int main(){
    Node* head= nullptr;

    //Creating first node
    Node* node1 = new Node;
    node1->data=1;
    node1->next=nullptr;

    Node* node2=new Node;
    node2->data=2;
    node2->next=nullptr;

    Node* node3 = new Node;
    node3->data=3;
    node3->next=nullptr;

    head=node1;
    node1->next=node2;
    node2->next=node3;

    Node* current = head;
    while (current!=nullptr)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;    

}