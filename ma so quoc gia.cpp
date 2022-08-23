#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string delimiter="084";
		size_t pos=0;
		pos=s.find(delimiter);
		s.erase(pos,3);
		cout<<s<<endl;
	}
}

