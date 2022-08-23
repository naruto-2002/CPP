#include<bits/stdc++.h>
using namespace std;
int check(int n)
{
	int count=0;
	while(n!=0)
	{
		n/=10;
		count++;
	}
	return count;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
			while(check(n)!=1)
			{
				int m=0;
				while(n!=0)
				{
					m+=n%10;
					n/=10;
				}
				n=m;	
			}
			
			cout<<n<<endl;
		
	}
		
}


