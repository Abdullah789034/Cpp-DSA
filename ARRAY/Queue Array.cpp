#include <iostream>
using namespace std;
const int maxx=4;

class Queue{
private:
int items[maxx];
int front,rear;

public:
Queue(){
    front=-1;
    rear=-1;
}

bool isEmpty(){
    return (front==-1 && rear==-1);
}

bool isFull(){
    return (front==maxx-1 && rear==maxx-1);
}

void enque(int val){
    if(isFull()){
        cout<<"Stack Overflow";
    }
    else{
        if(front==-1) front=0;
        rear++;
        items[rear]=val;
        cout<<"Inserted:"<<items[rear]<<endl;
    }
}
void deque(){
    if(isEmpty()){
        cout<<"No element lives here";
    }
    else{
        cout<<"\nElement deque:"<<items[front];
        if(front ==rear){
        front=-1;
        rear=-1;
    }else{
        front++;
    }
        
    }
    
}

void display(){
 int i;
    if (isEmpty()) {
      cout << endl
         << "Empty Queue" << endl;
    } else {
      cout << endl
         << "Front index-> " << front;
      cout << endl
         << "Items -> ";
      for (i = front; i <= rear; i++)
        cout << items[i] << "  ";
      cout << endl
         << "Rear index-> " << rear << endl;
    }
}


int peek() {
        if (isEmpty()) {
            std::cerr << "Error: Queue is empty." << std::endl;
            return -1;  // You can choose a different value to indicate an error
        }
        return items[front];
    }

};

int main(){
    Queue q;
    q.enque(7);
    q.enque(4);
    q.enque(8);
    q.enque(3);
  
    q.display();
    q.deque();
    q.deque();
q.display();

    return 0;
}