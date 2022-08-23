#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		if(str1.length()<str2.length()) swap(str1,str2);
		if(str1.length()==str2.length()&&str1[0]<str2[0]) swap(str1,str2);
		reverse(str1.begin(),str1.end());
		reverse(str2.begin(),str2.end());
		int a[10000]={0},b[10000]={0};
		for(int i=0; i<str1.length(); i++)
		{
			a[i]=str1[i]-48;
		}
			for(int i=0; i<str2.length(); i++)
		{
			b[i]=str2[i]-48;
		}
		
		
		
		
		int c[10000]={0},q=0;
		int w=0;
		for(int i=0; i<str1.length(); i++)
		{
			if(a[i]>=b[i])
			{
				c[q++]=a[i]-b[i];
			}
			else
			{
				c[q++]=(a[i]+10)-b[i];
				b[i+1]+=1;
				
			}
		}
		for(int i=q-1; i>=0; i--)
		{
			cout<<c[i];
		}
		cout<<endl;
	}
}

