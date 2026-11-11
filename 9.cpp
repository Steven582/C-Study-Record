#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};


Node* front(Node *dummy,int n){
	Node *p = new Node{n,dummy->next};
	dummy->next = p;
	return dummy->next;
}


void back_tail(Node *dummy,Node *&tail,int n){
	Node *p = new Node{n,nullptr};
	tail->next = p;
	tail = p; 
}


void back(Node *dummy,int n){
	Node *p = new Node{n,nullptr};
	Node *cur = dummy;
	while (cur->next ) cur = cur->next ;
	cur->next = p;
}


int length(Node *dummy){
	int n = 0;
	for (Node *p = dummy; p ;p = p->next ) ++n;
	return n;
}


Node* find(Node *dummy,int n){
	for (Node *p = dummy;p;p = p->next){
		if (p->data == n) return p;
	}
	return nullptr;
		
}


Node* insert(Node *dummy,int pos,int n){
	if (pos < 0) return dummy;
	//if (pos == 0) return new Node{n,dummy};   broke dummy struct
	
	Node *prev = dummy;
	for (int i = 0; prev && i < pos ;++i){
		prev = prev->next;
	}
	if (prev == nullptr) return dummy;
	
	prev->next = new Node{n,prev->next};		// new one -> orginal next  , orginal front -> new one
	return dummy;
}


void print(Node *dummy){
	for (Node *p = dummy; p ;p = p->next) cout<<p->data<<" ";
	cout<<"NULL";
}


int main()
{
	
	
	Node *dummy = nullptr;
	
	
}
