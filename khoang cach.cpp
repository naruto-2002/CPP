#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double x,y,x1,y1;
		cin>>x>>y>>x1>>y1;
		double a=(x-x1)*(x-x1);
		double b=(y-y1)*(y-y1);
		double kc=(double)sqrt(a+b);
		cout<<setprecision(4)<<fixed<<kc<<endl;
	}
}

