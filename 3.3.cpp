#include<iostream>

using namespace std;

void sw(const string &a){
	
	cout<<a<<" "<<endl;
}

void se(const int a[],int n){
	for (int i=1;i<n;i++){
		cout<<a+i<<" "<<*(a+i)<<endl;
	}
}


int main()
{
	
	const string s = "Hello World";
	const char *w = "hello world";               //w指的是字符串的首字母地址 
	int d[] = {1,2,4,6,8,9,0};
	
	cout<<s[1];
	cout<<*w;
	
	sw(s);
	se(d,7);
}
