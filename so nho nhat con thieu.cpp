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
	    for(int i=0; i<n-1; i++)
	    {
	    	cin>>a[i];
		}
		int kq=1;
		while(1)
		{
			int ok=1;
			for(int i=0; i<n-1; i++)
			{
				if(a[i]==kq) ok=0;
			}
			if(ok==0) kq++;
			else
			{
				cout<<kq<<endl;
				break;
			}
		}
		
	}
}

