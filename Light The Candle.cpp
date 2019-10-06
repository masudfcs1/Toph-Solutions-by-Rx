#include <iostream>

using namespace std;

int main() {
	int i,j,n,a,b,sum;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0;
		cin>>a;
		for(j=0;j<a;j++)
		{
			cin>>b;
			sum+=b;
		}
		cout<<sum<<endl;
	}
	return 0;
}
