#include<iostream>
#include<stdbool.h>
#include<math.h>
bool sngt(long long n)
{
	if(n<2) return false;
	for(long long i=2; i<= sqrt(n); i++)
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
		for(long long i=2; i<=n; i++)
		{
		    if(sngt(i))
			{
				if(sngt(n-i))
				{
					cout<<i<<' '<<n-i;
					break;
				}
			}
		}
		cout<<endl;
   }
	
}

