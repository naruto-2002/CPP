#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		string delimiter="100";
		size_t pos=0;
		while((pos = s.find(delimiter))!= string::npos)
		{
			
			s.erase(pos, 3);
		}
		int m = s.length();
		if(n - m != 0) cout << n - m << endl;
	}
	
	
}


