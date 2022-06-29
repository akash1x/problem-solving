#include <bits/stdc++.h>
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

void insertAtHead(Node* &head, int val){
	Node* newNode=new Node(val);
	newNode->next=head;
	head=newNode;
}

void insertAtTail(Node* &head,int val){
	if(head==NULL){
		insertAtHead(head,val);
	}
	Node* newNode=new Node(val);
	Node* temp;
	temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

void display(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
	}
	cout<<"NULL";

}


int main(){
	Node* head;
	insertAtHead(head,1);
	insertAtHead(head,2);
	insertAtHead(head,3);
	insertAtTail(head,4);
	insertAtTail(head,5);
	insertAtTail(head,6);
	insertAtHead(head,7);
	display(head);

	return 0;
}