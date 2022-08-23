#include<bits/stdc++.h>
using namespace std;
const long long r = 1000000007;
long long a[1009];
main()
{
	int t;
	cin>>t;
    a[0]=0;
	a[1]=1;
	for(int i=2; i<=1008; i++)
	{
		a[i]=a[i-1]%r+a[i-2]%r;
	}
	while(t--)
	{
		int n;
		cin>>n;
		
		cout<<a[n]%r<<endl;
	}
	
	
}

