#include<iostream>
#include<math.h>
#include<stdbool.h>
bool sngt(long long n)
{
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++)
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
			while(n%2==0)
			{
				n/=2;
				cout<<2<<' ';
			}
		for(long long i=3; i<=sqrt(n); i+=2)
		{
			while(n%i==0)
			{
				n/=i;
				cout<<i<<' ';
			}
			
		}
		if(sngt(n)) cout<<n<<' ';
		cout<<endl;
   }
	
}

