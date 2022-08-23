#include<iostream>
#include<stdbool.h>
#include<math.h>
bool sngt(long long n)
{
	if(n<2) return false;
	for(int i=2; i<= sqrt(n); i++)
	{
		if(n%i==0) return false;
	}
	return true;
}
using namespace std;

main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   	long long n;
		cin>>n;
		if(n>=2) cout<<2<<' ';
		for(long long i=3; i<=n; i+=2)
		{
		    if(sngt(i))
			{
				cout<<i<<' ';
			}
		}
		cout<<endl;
   }
	
}

