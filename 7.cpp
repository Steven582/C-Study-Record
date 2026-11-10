#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int *a = new int [n];
	
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int i = n - 1;
	int j = 0;
	
	while (i > j ){
		while (i > j && a[j] % 2 == 0)++j;
		while (i > j && a[i] % 2 == 1)--i;
		
		if (i > j){
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
