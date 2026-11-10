#include<iostream>

using namespace std;

struct Student{
	int id;
	int score;
};

void sort(Student* s,int n,Student **idx){

	for (int i=0;i<n;i++){
		idx[i] = &s[i];
	}
	
	for (int i=0;i<n-1;i++){
		
		for (int j=0;j<n-i-1;j++){
			
			if (idx[j]->score > idx[j+1]->score){
				Student *temp = idx[j+1];
				idx[j+1] = idx[j];
				idx[j] = temp;
			}
			
			
		}
	}
		
}


int main()
{
	Student a[] = {{1,34},{2,36},{3,96},{4,69},{5,23},{6,27},{7,29}};
	
	Student* p =a;
	
	for (int i=0;i<=6;i++){
		cout<<a[i].score<<" "<<a[i].id<<endl;
	}


	Student *idx[7];
	sort(p,7,idx);
	
	cout<<endl;
	
	for (int i=0;i<7;i++){
		cout<<idx[i]->score<<" "<<idx[i]->id<<endl;
	}
}
