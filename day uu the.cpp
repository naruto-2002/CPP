#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ch=0;
		int le=0;
		int count=0;
		while(1)
		{
			int n;
			char s;
			cin>>n;
			scanf("%c",&s);
			count++;
			if(n%2==0) ch++;
			else le++;
			if(s=='\n') break;
		}
		if((count%2==0&&ch>le)||(count%2!=0&&ch<le)) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}

