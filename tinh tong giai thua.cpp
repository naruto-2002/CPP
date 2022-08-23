#include<bits/stdc++.h>
using namespace std;
main()
{
	long long s;
	cin>>s;
	unsigned long int kq=0;
	long long sum=0;
	while(s>0)
	{
		long long kq=1;
		for(int i=1; i<=s; i++)
		{
			kq*=i;
		}
		sum+=kq;
		s--;
	}
	cout<<sum;
}

