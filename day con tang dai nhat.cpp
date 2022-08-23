#include<bits/stdc++.h>
using namespace std;
int tangdainhat(int a[] ,int b[] ,int n)
{
	for(int i=0; i<n; i++){
		int max=0;
		for(int j=0; j<i; j++){
			if(a[i]>a[j])
				if(b[j]>max) 
					max=b[j];
		}
		b[i]=max+1;
	}
	int max1=b[0];
	for(int i=0; i<n; i++)
		if(b[i]>max1) max1=b[i];
	return max1;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n]={0};
		for(int i=0; i<n; i++) cin>>a[i];
		cout<<tangdainhat(a,b,n);
		cout<<endl;
	}
}

