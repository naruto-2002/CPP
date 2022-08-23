#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k;
		cin>>n>>k;
		int kq=0; 
		for(long long i=1; i<=n; i++)
		{
			kq+=i%k; 
		}
		if(kq==k) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}

