#include<iostream>

using namespace std;

int * San(int *start,int *end,int target){
	
	while (start < end){
		int *mid = start + (end - start) / 2;
		
		if (*mid >= target){
			end = mid;
		}else{
			start = mid + 1;
		}
		 
	}
	
	return start;
	
	
	
}




int main()
{
	int a[] = {0,1,2,3,4};
	
	int *p = a;
	
	/*int sum = 0;
	
	for (p = a;p <= a + 4;p++){
		sum += *p;
	}
	
	cout<<sum;
	*/
	
	cout<<*San(a,a+5,2);
	
	
}
