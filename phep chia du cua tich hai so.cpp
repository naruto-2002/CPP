#include<bits/stdc++.h>
using namespace std;
long long test(long long a, long long b, long long p)
{
	if(b==0) return 0;
	long long k= test(a,b/2,p);
	if(b%2==0) return(2*(k%p))%p;
	else return(a%p+2*(k%p))%p;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
		cout<<test(a,b,c)<<endl;
	}
}

