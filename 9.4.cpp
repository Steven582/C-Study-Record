#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

Node* front(int a[],int n){
	Node *dummy = new Node{0,nullptr};
	
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],dummy->next};
		dummy->next = p;
	}
	return dummy;
}

Node* back_tail(int a[],int n){
	Node *dummy = new Node{0,nullptr};
	Node *tail = dummy;
	
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],nullptr};
		tail->next = p;
		tail = p;
	}
	return dummy;
}

Node* back(int a[],int n){
	Node *dummy = new Node{0,nullptr};
	
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],nullptr};
		Node *cur = dummy;
		while (cur->next) cur = cur->next;
		cur->next = p;
	}
	return dummy;
}

void print(Node *dummy){
	for (Node *p = dummy->next; p ; p = p->next) cout<<p->data<<" ";
	cout<<"NULL"; 
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
	//if (pos == 0) return new Node{n,dummy};   
	
	Node *prev = dummy;
	for (int i = 0; prev && i < pos ;++i){
		prev = prev->next;
	}
	if (prev == nullptr) return dummy;
	
	prev->next = new Node{n,prev->next};		// new one -> orginal next  , orginal front -> new one
	return dummy;
}

int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int n = sizeof(a) / sizeof(a[0]);
	
	Node *dummy = front(a,n);
	
	print(dummy);
	cout<<" "<<length(dummy)<<endl;
	
	print(insert(front(a,n),0,100));
	cout<<" "<<length(insert(front(a,n),0,100))<<endl;
	
	/*
	print(back_tail(a,n));
	print(back(a,n));
	cout<<" "<<length(back_tail(a,n))<<endl;
	*/
	
	//find(front(a,n),7);
	
}
