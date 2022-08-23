#include<bits/stdc++.h>
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
		long long a,b,c,d;
		cin>>a>>b>>c>>d;
		int arr[3]={a,b,c};
		long long kq=1;
		for(int i=0; i<3; i++)
		{
			kq=bcnn(kq,arr[i]);
		}
		long long n=ceil(pow(10,d-1)/kq);
		if((long long )kq*n<pow(10,d-1)||(long long )kq*n>=pow(10,d)) cout<<"-1";
		else
		{
			cout<<(long long )kq*n;
		}
		cout<<endl;
		
		
	}
}


