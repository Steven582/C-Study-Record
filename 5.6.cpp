#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	
	for (int i=0;i<=1000000;i++){
		int *a = new int [10000];
		a[0] = 1;
		
		delete[] a;    //¿ØÖÆÊÇ·ñÐ¹Â¶ 
	}
	
	Sleep(10);
	
	return 0;
}
