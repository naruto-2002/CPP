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
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
		}
	    sort(a,a+n);
	    int nho[1000],p=0;
	    int lon[1000],q=1;
	    if(n%2!=0)
	    {
		    	for(int i=0; i<=n/2; i++)
		    {
		    	nho[p]=a[i];
		    	p+=2;
			}
			for(int i=(n/2)+1; i<n; i++)
		    {
		    	lon[q]=a[i];
		    	q+=2;
			}
		}
		else
		{
				for(int i=0; i<n/2; i++)
		    {
		    	nho[p]=a[i];
		    	p+=2;
			}
			for(int i=(n/2); i<n; i++)
		    {
		    	lon[q]=a[i];
		    	q+=2;
			}
		}
	    for(int i=0; i<n; i++)
	    {
	    	if(i%2==0) cout<<nho[i]<<' ';
	    	else cout<<lon[i]<<' ';
	    	
		}
		cout<<endl;
	}
}


