#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char names[4][20] = {"pear","apple","fig","banana"};
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3-i;j++){
			
			if (strcmp(names[j],names[j+1]) > 0){
				char temp[20];
				strcpy(temp,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],temp);
			}
		}
	}
	
	for (int i=0;i<4;i++){
		cout<<names[i]<<" ";
	}
}
