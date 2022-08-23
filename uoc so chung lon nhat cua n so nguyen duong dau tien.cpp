#include<iostream>
using namespace std;
long long ucln(long long a, long long b)
{
		while(b!=0)
	{
	long long x=a%b;
		      a=b;
		      b=x;
	}
	return a;
}
long long bcnn(long long a, long long b)
{
	long long x=ucln(a,b);
	return (a*b)/x;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long kq=1;
		for(long long i=1; i<=n; i++)
		{
			kq=bcnn(kq,i);
		}
		cout<<kq<<endl;
	}
}

