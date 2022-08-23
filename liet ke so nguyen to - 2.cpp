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
	   	long long a,b;
		cin>>a>>b;
		for(long long i=a; i<=b; i++)
		{
		    if(sngt(i))
			{
				cout<<i<<' ';
			}
		}
		cout<<endl;
   }
	
}

