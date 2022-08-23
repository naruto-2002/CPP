#include<bits/stdc++.h>
using namespace std;
main()
{
	long long n;
	cin>>n;
	int count=10;
	for(long long i=pow(10,n-1); i<pow(10,n); i++)
	{
		int ch=0;
	    int le=0;
	    int m=i;
	    while(m!=0)
	    {
	    	if((m%10)%2==0) ch++;
	    	else le++;
	    	m/=10;
		}
		if(ch==le) 
		{
			cout<<i<<' ';
			count--;
		}
		if(count==0)
		{
			cout<<'\n';
			count=10;
		}
		
	}
	
}

