#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	string a;
	getline(cin,a);
	
	int n = a.length();
	int i = 0;
	int count = 0;
	
	string max = "";
	string word = "";
	
	while ( i < n ){
		
		if (a[i] == ' '){
			i++;
		}
		
		int start = i;
		
		while (i < n && a[i] != ' '){
			i++;
		}
		int end = i;
		count++;
		
		word = "";
		for (int j=start;j<end;j++){
			word += a[j];
		}
		
		if (word.length() > max.length()){
			max = word;
		}
	}
	
	cout<<count<<" "<<max<<endl;
	
	for (int i=n;i>1;--i){
		cout<<a[i];
	}
	
}
