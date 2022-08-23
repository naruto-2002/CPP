#include<bits/stdc++.h>
using namespace std;
string xuatmin(int m, int s)
{
	vector<int> v(m); 
    string res = ""; 
	int count=0;
	s-=1;
	for(int i=m-1; i>0; i--)
	{
		if(s>9)
		{
			v[i]=9;
			s-=9;
		}
		else
		{
			v[i]=s;
			s=0;
		}
	}
	v[0]=s+1;
	for(int i=0; i<m; i++)
	{
		res.push_back(v[i] + '0');
	}
	return res; 
}
string xuatmax(int m, int s)
{
	vector<int> v(m); 
    string res = ""; 
	int count=0;
	for(int i=0; i<m; i++)
	{
		if(s>9)
		{
			v[i]=9;
			s-=9;
		}
		else
		{
			v[i]=s;
			s=0;
		}
	}
	for(int i=0; i<m; i++)
	{
		res.push_back(v[i]+'0'); 
	}
	return res;
}
main()
{
	int m,s;
	cin>>m>>s;
	if(s>9*m || (m>1 && s==0)) 
	{ 
	 	cout<<"-1"<<' '<<"-1";
	}  
    else
	{
		cout<<xuatmin(m,s)<<" "<<xuatmax(m,s);
	}
		
}

