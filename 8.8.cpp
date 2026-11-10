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


Node* back(Node *dummy,Node* &tail,int n){
	Node *p = new Node{n,nullptr};
	tail->next = p;
	tail = p;
	/*
	Node *cur = dummy;
	while (cur->next) cur = cur->next;
	cur->next = p;
	*/
	return dummy->next;
}


void printlist(Node *dummy){
	for (Node *p = dummy->next;p != nullptr;p = p->next ){
		cout<<p->data<<" ";
	}
}

int main()
{
	Node dummy{0,nullptr};
	
	front(&dummy,1);
	front(&dummy,2);
	printlist(&dummy);
	
	dummy.next = nullptr;
	Node *tail = &dummy;
	
	back(&dummy,tail,4);
	back(&dummy,tail,9);
	printlist(&dummy);
	
	
	
	
	
}
