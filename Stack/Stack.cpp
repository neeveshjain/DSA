#include<iostream>
#include<bits/stdc++.h>
#define MAX_SIZE 100
using namespace std;

class Stack{
    private:
        int top;
        int elements[MAX_SIZE];
    public:
        Stack(){
            top = -1;
        }
        bool isEmpty(){
            return top == -1;
        }
        bool isFull(){
            return top == MAX_SIZE-1;
        }
        void push(int value){
            if(isFull()){
                cout<<"Stack overflow: Cannot push element, the stack is full"<<endl;
                return;
            }
            elements[++top]=value;
            cout<<"Pushed "<<value<<" to the stack."<<endl;
        }

        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty : Cannot pop element, the stack is empty"<<endl;
            }
            int poppedElement = elements[top--];
            cout<<"Popped "<<poppedElement<<" from the stack"<<endl;
        }
        int peek(){
            if(isEmpty()){
                cout<<"The stack is empty"<<endl;
                return -1;
            }
            return elements[top];
        }
};

int main(){
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout<<"Top element is ->"<<stack.peek()<<endl;
    stack.pop();
    cout<<"Top element is ->"<<stack.peek()<<endl;
    stack.pop();
    cout<<"Top element "<<stack.peek()<<endl;
    stack.pop();
    cout<<"Top element "<<stack.peek()<<endl;    

    return 0;

}