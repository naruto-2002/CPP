#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int count=0;
		for(int i=2; i<=n; i++)
		{
			int k=i;
			while(k%m==0)
			{
				k/=m;
				count++;
			}
		}
		cout<<count<<endl;
	}
}

