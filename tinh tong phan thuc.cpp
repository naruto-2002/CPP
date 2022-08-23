#include<bits/stdc++.h>
using namespace std;
 int main()
 { 
	 int n; 
	 cin>>n;
	 double sum = 0; 
	 for(int i = 1; i <= n; i++)
	 { 
	 	sum += (float)1/ i; 
	 } 
	 cout<<setprecision(4)<<fixed<<sum;
	 return 0; 
 }

