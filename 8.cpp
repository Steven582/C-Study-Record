#include<iostream>
using namespace std;

struct Node {
	int data;
	Node *next;
};


Node* pushfront(Node *&head,int v){
	Node *p = new Node{v,head};
	head = p;
}


Node* pushback(Node *&head,Node *&tail,int v){
	Node *p = new Node{v,nullptr};
	if (head == nullptr){
		head = p;
		tail = p;
	}else{
		tail->next = p;
		tail = p;
	}
	
	/*
	Node *cur = head;
	while (cur -> next) cur = cur->next;
	cur -> next = p;
	return head;
	*/
}


void print(Node *head){
	for (Node *p = head; p ; p = p->next) cout<<p->data<<"->";
	cout<<"NULL"<<endl;
}


int main()
{
	Node *head = nullptr;
	
	
	pushfront(head,1);
	pushfront(head,2);
	pushfront(head,3);
	pushfront(head,4);
	pushfront(head,5);
	
	print(head);
	cout<<endl;
	
	head = nullptr;
	Node *tail = nullptr;
	
	pushback(head,tail,1);
	pushback(head,tail,2);
	pushback(head,tail,3);
	pushback(head,tail,4);
	pushback(head,tail,5);
	
	print(head);
}
