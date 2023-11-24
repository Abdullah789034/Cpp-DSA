//singly linked list
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include <cstdlib>
using namespace std;
struct node
{
	int data;
	//struct node* pre;
	struct node* next;
};
struct node* tail,* head,* newnode,*tempvar=0;
int create(int n)
{
	int pos;
	newnode=(struct node*)malloc(sizeof (struct node));
	newnode->data=n;
	//newnode->pre=0;
	newnode->next=0;
	if(head==0)
	{
	head=newnode;
	tail=newnode;
	cout<<"Head created";
	}
	else
	{
	int ch; 
	cout<<"\nEnter 1 to insert newnode before head"; 
	cout<<"\nEnter 2 to insert newnode at last\n";
	cout<<"\nEnter 3 to insert newnode at specific position\n";
	cout<<"\n-----------------------------------------------\n";
	cin>>ch;
	if(ch==1)
	{
	newnode->next=head;
	head=newnode;
	cout<<"\nInserted before head";
	}
	else if(ch==2)
	{
	tail->next=newnode;
	newnode->next=0;
	tail=newnode;
	cout<<"\nInserted at last";
	}
	else if(ch==3)
	{
		int i=1;
		node* previous=head;
		cout<<"\nEnter position";
		cin>>pos;
		int pos1=pos-1;
		if(pos==1)
		{
			cout<<"Invalid Position";
		}
		else
		{
			
			while(i<pos1)
			{
				previous=previous->next;
				i++;
			}
			newnode->next=previous->next;
			previous->next=newnode;
			
		}
	}
}
 } 
 int deletion1()
 {
 	if(head==0)
 	{
 		cout<<"\n To delete a node from beginning you have to create a head first \n";
	 }
 	else
	{
		tempvar=head;
		head=head->next;
		//head->pre=0;
		free(tempvar);
		cout<<"\n A node has deleted from beginning(Previously head) ";
	}	
 }
 int deletion2()
{
  	if(head==0&&tail==0)
	{
 		cout<<"\n To delete a node from last, its must to create a seperate tail first";	
 	}
 	else
 	{
 		//Linked list must be traversed first to find the second last node and make its next 0 and assign tail to it and free the preious tail
 		node* tempp1=tail;
		node* tempp=head;
		while(tempp->next=tail)
		{
			tempp->next=0;
			tempp=tail;
			free(tempp1);
		}
		
 		cout<<"\nA node is deleted from last(Previously tail)\n";
 	}
 }
 int deletion3()
 {
	int pos1,i=1;
 	if(head==0&&tail==0)
	{
 		cout<<"\n to delete a node at a specific position, you have to create head and tail first";	
 	}
 	else
	{
		int pos;
		node* current=head;
		node* previous_of_current=head;
		cout<<"\nEnter position";
		cin>>pos;
		if(pos==1)
		{
			cout<<"\n by giving position 1 you are deleting node from beginning. so please choose 'deletion from beginning' option ";
		}
		else
		{
			while(i==pos)
			{
				current=current->next;
				i++;
			}
			while(previous_of_current->next=current)
			{
				previous_of_current=previous_of_current->next;
			}
			previous_of_current->next=current->next;
			free(current);
		}
				
	}
}

int display() {
   struct node* ptr;
   ptr = head;
   while(ptr != NULL) {
    cout<< ptr->data <<" ";
    ptr = ptr->next;
   }
}

int main()
{
	int N,D,z,A,E,C;
	int choice,ch;
	do{
	cout<<"\nTo enter new node press 1"<<endl;
	cout<<"\nTo view linked list press 2"<<endl;
	cout<<"\nEnter 3 to delete node from beginning\n";
	cout<<"\nEnter 4 to delete node from last \n";
	cout<<"\nEnter 5 to delete node from specific position\n";
	cout<<"\n-----------------------------------------------\n";
	cin>>ch;
	switch(ch)
	{
	case 1:
	cout<<"Enter data";
	cin>>z;
	N=create(z);
	break;
	case 2:
	D=display();
	break;	
	case 3:
	A=deletion1();
	break;	
	case 4:
	C=deletion2();
	break;
	case 5:
	E=deletion3();
	break;	
	}
	cout<<"\nTo repeat press 0";
    cin>>choice;
	}while(choice==0);
}