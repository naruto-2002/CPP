#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	string a1=" A B B A D C C A B D C C A B D";
	string a2=" A C C A B C D D B B C D D B B";
	while(t--)
	{
		int n;
		string s;
		cin>>n;
		getline(cin,s);
		float scd=0;
	
			if(n==101)
			{
					for(int i=0; i<30; i++)
				{
					if(a1[i]==s[i]) scd++;
			    }
			}
			else
			{
					for(int i=0; i<30; i++)
				{
					if(a2[i]==s[i]) scd++;
			    }
			}
		
		cout<<setprecision(2)<<fixed<<(float)(((scd-15)*2)/3);
		cout<<endl;
		
	}
}

