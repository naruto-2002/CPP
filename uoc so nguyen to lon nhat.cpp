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
   	    long long a[1000];
   	    int count=0;
	   	long long n;
		cin>>n;
			while(n%2==0)
			{
				n/=2;
				a[count++]=2;
			}
		for(long long i=3; i<=sqrt(n); i+=2)
		{
			while(n%i==0)
			{
				n/=i;
				a[count++]=i;
			}
			
		}
		if(sngt(n)) a[count++]=n;
		cout<<a[count-1]<<endl;
   }
	
}

