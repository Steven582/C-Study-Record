#include<iostream>

using namespace std;

size_t my_strlen(const char *a){ 			//
	const char *b = a;
	while (*b != 0){
		++b;
	}
	return b - a;
}


char* my_strcpy(char *dst,const char *src){			//
	char *ret = dst;
	while ( (*dst++ = *src++)); 			//1.dst = src++  2.dst++  3.if \0
	
	return ret;
}

int my_strcmp(char *a,char *b){
	while (*a && *a == *b){
		++a;
		++b;
	}
	
	return (unsigned char)*a - (unsigned char)*b;
}


int main()
{
	char m[] = "hello";
	char n[sizeof(m)]; 
	
	cout<<my_strlen(m);
	cout<<my_strcpy(n,m);
	
	
	
	
	
}
