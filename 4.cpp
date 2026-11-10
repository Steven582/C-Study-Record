#include<iostream>

using namespace std;

struct Student{
	int id;
	string name;
	int score;
};

Student * find(Student *s,int n,int id){
	
	for (int i = 0;i < n;++i){
		if (s[i].id == id){
			return &s[i];
		}
	}
	return nullptr;
}

bool iden(Student *s,int n,int id,int score){
	Student *target = find(s,n,id);
	
	if (target == nullptr){
		return false;
	}
	
	target->score = score;
	return true;
}




int main()
{
	Student a[] = {{12,"Smith",67},{13,"Frank",73},{15,"Jack",80}};
	
	Student *p = a;
	
	for (p = a;p < a + 3;p++){
		p->score += 5;                           //也是传地址，有点像int &|| int * 之类 
		cout<<p->name<<" "<<p->score<<endl;
	}
	
	
	
	
	if (iden(a,3,15,78)){
		cout<<"done";
	}else{
		cout<<"wrong";
	}
	
 } 
