#include <iostream>

using namespace std;

int main() {
	int a,b,n,i,t,sum,j;
	cin>>t;
	for(i=0;i<t;i++)
	{
		sum=0;
	cin>>a>>b>>n;
	  for(j=a;j<=n;j+=(b-a))
	    sum+=j;
	cout<<sum<<endl;
	}
	
		return 0;
}
