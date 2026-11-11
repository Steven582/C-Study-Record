#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node* insert(Node *dummy,int n){
	Node *prev = dummy;
	while (prev->next && prev->next->data < n){
		prev = prev->next;
	}
	prev->next = new Node{n,prev->next};		
	return dummy;
}

void print(Node *dummy){
	for (Node *p = dummy->next; p ; p = p->next) cout<<p->data<<" ";
	cout<<"NULL";
}


int main()
{
	Node* dummy = new Node{0,nullptr};
	
	insert(dummy,2);print(dummy);
	insert(dummy,8);print(dummy);
	insert(dummy,1);print(dummy);
	
	
}
