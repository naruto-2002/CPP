#include<bits/stdc++.h>
using namespace std;
int a[1000001];
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int kq=0;
		int w=0;
		int len=s.length();
		s[len]='a';
		s[len+1]='b';
		s[len]='a';
	  	  	for(int i=0; i<len+2; i++)
		{
			if(!isalpha(s[i]))
			{
				kq*=10;
				kq+=s[i]-'0';
			}
			else
			{
				a[w++]=kq;
				kq=0;
			}
		}
		int sum=0;
		for(int i=0; i<w; i++)
		{
	        sum+=a[i];
		}
		cout<<sum<<endl;
	}
}

