#include<bits/stdc++.h>
using namespace std;


main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		int count=0;
		int b[10];
		for(int i=0; i<10; i++)
		{
			b[i]= -1 ;
		}
		while(n--)
		{
		     string m;
		     cin>>m;
		     for(int i=0; i<m.length(); i++)
		     {
		     	b[m[i]-48]++;
			 }
			
		}
		for(int i=0; i<10; i++)
		{
			if(b[i]!=-1) cout<<i<<' ';
		}
		cout<<endl;
	}
}

