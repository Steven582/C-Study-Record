#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};


Node* build(int a[],int n){
	Node *head = nullptr;
	for (int i=0;i<n;i++){
		Node *p = new Node{a[i],head};
		head = p;
	}
	return head;
}


Node* remove_value(Node *head,int v){
	//开头连续 
	while (head && head->data == v){
		Node *t = head;
		head = head->next;
		delete t;
	}
	//剩余部分 
	Node *cur = head;
	while (cur && cur->next){
		if (cur->next->data == v){
			Node *t = cur->next;
			cur->next = t->next;
			delete t;
		}else{
			cur = cur->next;
		}
	}
	return head;
}


void remove_all(Node *head){
	while (head && head->next){
		Node *t = head->next;
		delete head;
		head = t;
	}
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
	
	Node *head2 = remove_value(head1,9); 
	print(head2);
	
	
	remove_all(head2);
	
	
}


