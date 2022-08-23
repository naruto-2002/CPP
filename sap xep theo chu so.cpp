#include <bits/stdc++.h>
using namespace std;
int Whichputfirst(string a, string b)
{
    return a+b>b+a;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n; 
		cin >> n; 
		string a[n];
	    for(int i=0; i<n; i++) cin >> a[i];
	    sort(a, a+n, Whichputfirst);
	    for(int i=0; i<n; i++) cout << a[i];
	    cout<<endl;
	}
}

