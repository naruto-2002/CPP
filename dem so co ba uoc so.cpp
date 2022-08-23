#include<bits/stdc++.h>
using namespace std;
int sngt(long long n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}

main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int count=0;
		for(long long i=2; i<=sqrt(n); i++)
		{
			if(sngt(i)) count++;
		}
		cout<<count<<endl;
	}
}



