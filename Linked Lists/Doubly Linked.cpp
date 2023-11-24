#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* prev;
Node* next;

Node(int val){
    prev=NULL;
    next=NULL;
    data=val;
}

class DoublyLinked
{
private:
    Node* head;
public:
    DoublyLinked(){
        head=NULL;
    }

void insert(int val){
    Node* n= new Node(val);
    n->next=head;
    
}


};





};


int main(){

    return 0;
}