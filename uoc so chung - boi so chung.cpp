#include<iostream>
using namespace std;
long long ucln(int a, int b)
{
		while(a!=b)
		{
			if(a>b) a=a-b;
			else b=b-a;
		}
		return a;
}
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
	    long long bcnn=(double)a*b/ucln(a,b);
	    cout<<bcnn<<' '<<ucln(a,b)<<endl;
	
	}
}

