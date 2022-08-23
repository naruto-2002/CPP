#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int a[10]={0};
		int b[4]={7,5,3,2};
		for(int i=0; i<n; i++)
		{
			if(s[i]-'0'==9) 
			{
				a[7]+=1;
				a[3]+=2;
				a[2]+=1;
			}
			else if(s[i]-'0'==8)
			{
				a[7]+=1;
				a[2]+=3;
			}
			else if(s[i]-'0'==7)
			{
				a[7]+=1;
			}
			else if(s[i]-'0'==6)
			{
				a[5]+=1;
				a[3]+=1;
			}
			else if(s[i]-'0'==5)
			{
				a[5]+=1;
			}
			else if(s[i]-'0'==4)
			{
				a[3]+=1;
				a[2]+=2;
			}
			else if(s[i]-'0'==3)
			{
				a[3]+=1;
			}
			else if(s[i]-'0'==2)
			{
				a[2]+=1;
			}
		}
		for(int i=0; i<4; i++)
		{
			while(a[b[i]]--)
			{
				cout<<b[i];
			}
		}
		cout<<endl;
		
	}
}

