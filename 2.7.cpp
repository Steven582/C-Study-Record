#include<iostream>

using namespace std;

int main()

{
	int a[] = {0,1,1,2,3,4,5,4,2};
	
	int *p = a;
	int *q = a + 8;
	
	while (p < q){
		int temp = *p;
		*p = *q;
		*q = temp;
		
		p++;
		q--;
	}
	
	for (int *m = a;m<=a + 8;m++){
		cout<<*m<<endl;
	}
	
}
