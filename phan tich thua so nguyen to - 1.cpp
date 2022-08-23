#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		int count=0;
		while(n%2==0)
		{
			n/=2;
			count++;
		}
		if(count!=0) cout<<2<<' '<<count<<' ';
		for(int i=3; i<=sqrt(n); i++)
		{
			count=0;
			while(n%i==0)
			{
				n/=i;
				count++;
			}
			if(count!=0)
			{
				cout<<i<<' '<<count<<' ';
			}
		}
		if(n!=1) cout<<n<<' '<<1<<' ';
		cout<<endl;
	}
}

