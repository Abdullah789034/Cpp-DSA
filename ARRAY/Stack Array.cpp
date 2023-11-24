#include <iostream>
using namespace std;
const int maxx=10;

class Stack{
private:
    int items[maxx];
    int top;

public:
    Stack(){
    top=-1;
    }

bool isEmpty(){
   return top==-1;
}

bool isFull(){
    return top==maxx-1;
}
void push(int value){
    if(isFull()){
    cout<<"Stack is Full";
    }
    else{
        top++;
        items[top]=value;
    }
    top++;
    items[top]=value;
}
void pop(){
    if(isEmpty()){
        cout<<"No element lives here";
    }
    top--;
}
int peek(){
    if(isEmpty()){
        cout<<"No element lives here";
    }
    return items[top];
}

};

int main(){

    Stack s;
    s.push(4);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(9);
    s.push(12);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;

    return 0;
}