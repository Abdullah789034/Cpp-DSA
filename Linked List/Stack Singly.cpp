#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int val){
    data=val;
    next=NULL;
}
};

class Stack{
private:
Node* top;

public:
Stack(){
    top=NULL;
}

void push(int val){
    Node* n=new Node(val);
    n->next=top;
    top=n;
}

bool isEmp(){
    return top==NULL;
}

void pop(){
    if(isEmp()){
        cout<<"khali hua";
    }
    else{
        int popped=top->data;
        Node* temp=top;
        top=top->next;
        cout<<popped;
    }

}
int peek(){
    if(isEmp()){
        cout<<"khali hua";
    }
    else{
        return top->data;
    }
}

void display(){
    Node* curr=top;
    while(curr != NULL){
        cout<<curr->data;
        curr=curr->next;
    }
}



};



int main(){
     Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << "Stack after push operations:\n";
    stack.display();
    cout<<endl;
    cout<<stack.peek();
    cout<<endl;
    stack.pop();
    cout<<endl;

    cout << "Stack after pop operation:\n";
    stack.display();

    
    return 0;
}