#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char *name[] = {"pear","apple","fig","banana"};
	
	
	for (int i=0;i<3;i++){
		for (int j=0;j<3-i;j++){
			if (strcmp(name[j],name[j+1]) > 0){ 		//cmp
				char* temp = name[j];
				name[j] = name[j+1];
				name[j+1] = temp;
			}
		}
	}
	
	for (int i=0;i<4;i++){
		cout<<name[i]<<" ";
	}
	
}
