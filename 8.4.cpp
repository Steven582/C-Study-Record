#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};


Node *buildFromArray(int a[], int n){
	Node *head = nullptr;
	Node *tail = nullptr;
	
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],nullptr};
		
		if (head == nullptr){
			head = p;
			tail = p;
		}else{
			tail->next = p;
			tail = p;
		}
	}
	return head;
}


Node *buildReverse(int a[],int n){
	Node *head = nullptr;
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],head};
		head = p;
	}
	return head;
}


void printlist(Node *head){
	for (Node *p = head;p != nullptr;p = p->next){
		cout<<p->data<<"->";
	}
}


int main()
{
	
	int a[] = {1,2,3,4,5,6,7,8,9,0};
	int n = sizeof(a)/sizeof(a[0]);
	
	Node *head1 = buildFromArray(a,n);
	printlist(head1);
	
	cout<<endl;
	
	Node *head2 = buildReverse(a,n);
	printlist(head2);
	
	
	
	
	
}
