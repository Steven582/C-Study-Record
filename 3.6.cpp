#include<iostream>

using namespace std;

int& back(int *a,int b){
	
	
	
	
	return a[b - 1];
}



int main()
{
	
	int app[] = {0,1,2,3,4,5,6};
	
	back(app,6) = 100;   //直接把地址传过来了 
	
	
	
	for (int i=0;i<=6;i++){
		cout<<*(app + i)<<endl;
	}
	
	
	
	
	
}
