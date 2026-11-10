#include<iostream>
using namespace std;

struct student{
	int id;
	char *name;
};

int main()
{
	student a = {5,"hello"};
	
	student b = a;    //指向同一内存地址，相互干扰，可能还会导致崩溃 
}
