#include <iostream>
using namespace std;

int main()
{
	int i;
	int n;
	double m=0.0;
	
	cout<<"please put into\n";
	cin>>n;
	
	for (i=1;i<=n;i++){
		m += 1.0/(i*i);
	}
	
	cout<<m;
}
