#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,m;
		cin>>a>>m;
		int ok=0;
		for(int i=0; i<=m-1; i++)
		{
			int q=(a*i)/m;
			if(q*m+1==a*i)
			{
			    ok=1;
				cout<<i<<endl;
				break;
			}
		}	
		if(ok==0) cout<<"-1"<<endl;
	}
}

