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

class LList{
public:
Node* head;

LList(){
    head=NULL;
}

void insert(int val){
    Node* n=new Node(val);
    n->data=val;
    n->next=head;
    head=n;
}

int toDeleteLast(){
    int popped=head->data;
    head=head->next;
    return popped;
}

void display(){
    Node* temp= head;
    while (temp !=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}

void toDelIndex(int val){
    
}



};



int main(){
    LList p;
    p.insert(2);
    p.insert(3);
    p.insert(1);
    p.insert(6);
    cout<<"----------";
    p.display();
        cout<<"----------";

    cout<<p.toDeleteLast()<<endl;
        cout<<"----------";

    p.display();
    return 0;
}