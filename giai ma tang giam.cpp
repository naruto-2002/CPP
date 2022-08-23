#include<bits/stdc++.h>
using namespace std;
int comp(int a, int b)
{
	return a>b;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a[10];
		int b=1;
		for(int i=0; i<10; i++) 
		{
			a[i]=b;
			b++;
		}
			int dem=0;
			int pos=0;
			string token;
		while(1)
		{
			if(s[0]=='I')
			{
				pos = s.find('D');
				if(pos == string :: npos)
				{
					sort(a+dem,a+dem+s.length()+1);
					dem+=s.length();
					break;
				}
				else
				{
					sort(a+dem,a+dem+pos+1);
					dem+=pos;
				    s.erase(0,pos);
				    
				}

			}
			else
			{
				pos = s.find('I');
				if(pos == string :: npos)
				{
					sort(a+dem,a+dem+s.length()+1,comp);
					dem+=s.length();
					break;
				}
				else
				{
					sort(a+dem,a+dem+pos+1,comp);
					dem+=pos;
				    s.erase(0,pos);
				    
				}
			}
			
			
		}
		for(int i=0; i<=dem; i++ ) cout<<a[i];
		cout<<endl;
	}
}

