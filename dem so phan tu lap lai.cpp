#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		int b[100001]={0};
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
	    for(int i=0; i<n; i++)
	    {
	    	for(int j=i+1; j<n; j++)
	    	{
	    		if(a[i]==a[j]) a[j]=-1;
			}
		}
		int result=0;
		for(int i=0; i<n; i++)
		{
			if(a[i]!=-1&&b[a[i]]>1) result+=b[a[i]];
		}
		cout<<result<<endl;
	}
}

