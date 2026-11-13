#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

Node *build(int a[],int n){
	Node *head = nullptr;
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],head};
		head = p;
	}
	return head;
}

Node* remove_pos(Node *dummy,int pos){
	if (pos < 0 || dummy == nullptr) return dummy;
	if (pos == 0){
		Node *t = dummy;
		dummy = dummy->next;
		delete t;
		return dummy;
	}
	
	Node *p = dummy;
	for (int i=0;i<pos-1;i++){
		if (p == nullptr) return dummy;
		p = p->next;
	}
	
	if (p == nullptr|| p->next == nullptr) return dummy;
	
	Node *t = p->next;
	p->next = t->next;
	delete t;
	
	return dummy;
}


Node* find_r(Node *dummy){
	Node *p = dummy;
	while (p && p->next){
		Node *q = p;
		while (q->next != nullptr){
			if (p->data == q->next->data){
				Node *t = q->next;
				q->next = t->next;
				delete t;
			}else{
				q = q->next;
			}
		}
		p = p->next;
	}
	return dummy;
}

void print(Node *dummy){
	for (Node *p = dummy; p ; p= p->next) cout<<p->data<<" ";
	cout<<endl;
}


int main()
{
	int a[] = {1,2,2,3,1};
	int n = sizeof(a) / sizeof(a[0]);
	
	Node *head1 = build(a,n);  print(head1);
	Node *head2 = find_r(head1);
	print(head2);
	
}












