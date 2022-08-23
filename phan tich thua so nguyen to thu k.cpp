#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a[1000];
		int count=0;
		long long n,m;
		cin>>n>>m;
		while(n%2==0)
		{
			n/=2;
		    a[count++]=2;
		}
		for(int i=3; i<=sqrt(n); i++)
		{
			while(n%i==0)
			{
				n/=i;
				a[count++]=i;
			}
		}
		if(n!=1) a[count++]=n;
		
		if(count>m-1) cout<<a[m-1];
		else cout<<"-1";
//		for(int i=0; i<count; i++)
//		{
//			cout<<a[i]<<' ';
//		}
		cout<<endl;
	}
}

