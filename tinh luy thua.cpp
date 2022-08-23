#include<bits/stdc++.h> 
using namespace std; 
long long chiadu(string s, long long mod) 
{ 
     long long number = 0; 
     for (long long i = 0; i < s.length(); i++) 
     { 
         number = (number*10 + (s[i] - '0' )); 
         number %= mod; 
         
     } 
     return number; 
} 
long long pow ( string a, int b, int mod ) {
	
    long long res = 1;
    long long k=chiadu(a,mod);
	for ( int i=b; i; i>>=1 ) 
	{
		if ( i & 1 )
		res = ((res%mod) * k)%mod;
		k = (k*k)%mod;
	}
return res;
}
int main() 
{ 
     int t;
     cin>>t;
     while(t--)
     {
     	
     	
     	 string a; 
	     long long b, m;
	     cin>>a;
		 cin>>b>>m; 
		 cout<< pow(a, b, m);
	     cout<<endl;
	     
	     
	 }
} 




