#include<bits/stdc++.h>
using namespace std;
long long sngt(long long n)
{
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}
long long tongchuso(long long n)
{
	long long sum=0;
	while(n!=0)
	{
		sum+=n%10;
		n/=10;
	}
	return sum;
}

main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   	long long n;
		cin>>n;
		long long m=n;
		long long a[10000],p=0;
			while(n%2==0)
			{
				n/=2;
				a[p++]=2;
				
			}
			
		for(long long i=3; i<=sqrt(n); i+=2)
		{
			while(n%i==0)
			{
				n/=i;
			    a[p++]=i;
			    
			}
			
		}
		if(sngt(n)) 	a[p++]=n;
		
		
		long long sum1=tongchuso(m);
		long long sum2=0;
		for(int i=0; i<p; i++)
		{
			sum2+=tongchuso(a[i]);
	    }
	    if(!sngt(m)&&sum1==sum2) cout<<"YES";
	    else cout<<"NO";
	    cout<<endl;
		
   }
	
}

