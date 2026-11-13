#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node* remove_pos(Node *head,int pos){
	if (pos < 0 || head == nullptr) return head;
	if (pos == 0){
		Node *p = head->next;
		delete head;
		return p;
	} 
	
	Node *prev = head;
	for (int i = 0; prev && i < pos - 1;++i){
		prev = prev->next;
	}
	
	if (prev == nullptr || prev->next == nullptr) return head;
	
	Node *t = prev->next;
	prev->next = t->next;
	delete t;

	return head;
}


Node* build(int a[],int n){
	Node *head = nullptr;
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],head};
		head = p;
	}
	return head;
}


void print(Node *head){
	for (Node *p = head; p ; p = p->next){
		cout<<p->data<<" ";
	}
	cout<<endl;
}


int main()
{
	int a[] = {0,1,2,3,4,5,6,7,8,9};
	int n = sizeof(a) / sizeof(a[0]);
	
	Node *head1 = build(a,n);
	print(head1);
	
	Node *head2 = remove_pos(head1,4); print(head2);
	
	Node *head3 = remove_pos(head2,0); print(head3);
	
	Node *head4 = remove_pos(head3,11); print(head4);
}

