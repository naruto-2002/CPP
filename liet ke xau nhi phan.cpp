#include<bits/stdc++.h>
using namespace std;
int n;
int a[50];
void xuat()
{
	for(int i=1; i<=n; i++)
	{
		cout<<a[i];
	}
	cout<<' ';
}
void nhiphan(int id)
{
	for(int i=0; i<=1; i++)
	{
		a[id]=i;
		if(id==n) xuat();
		else nhiphan(id+1);
	}
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
    		cin>>n;
    		int a[50];
	        nhiphan(1);
	        cout<<endl;
	}
}

