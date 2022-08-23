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
	long long n;
	cin>>n;
	int a[4]={2,3,5,7};
	int b[10]={0};
	for(int i=0; i<4; i++)
	{
		while(n%a[i]==0)
		{
			n/=a[i];
			b[a[i]]++;
		}
	}
	for(int i=0; i<4; i++)
	{
		if(b[a[i]]!=0)
		{
			cout<<a[i]<<' '<<b[a[i]]<<'\n';
		}
	}
	for(int i=11; i<=sqrt(n); i++)
	{
		int dem=0;
		if(sngt(i))
		{
			while(n%i==0)
			{
				n/=i;
				dem++;
			}
			if(dem!=0) cout<<i<<' '<<dem<<endl;
		}
	}
	if(sngt(n)) cout<<n<<' '<<"1";
	
}

