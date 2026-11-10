#include<iostream>

using namespace std;

void swap1(int **a,int **b){
	int *t = *a;
	*a = *b;
	*b = t;          //t->aµØÖ· 
	
	cout<<**a<<" "<<**b<<endl;
}

void swap2(int *&a,int *&b){
	int *t = a;
	a = b;
	b = t;
	
	cout<<*a<<" "<<*b<<endl;
}

void swap3(int *a,int *b){
	int t = *a;
	*a = *b;
	*b = t;
	
	cout<<*a<<" "<<*b<<endl;
}

int main()
{
	int a = 5;
	int b = 7;
	
	int *p = &a;
	int *q = &b;
	swap1(&p,&q);
	
	
	swap2(p,q);
	
	swap3(p,q);
	
	
}
