#include<bits/stdc++.h> 
using namespace std; 
typedef long long int ll; 
ll reduceB(ll a, char b[]) 
{ 
     ll mod = 0; 
     for ( int i = 0; i < strlen (b); i++) 
         mod = (mod * 10 + b[i] - '0' ) % a; 
     return mod;
} 
ll gcdLarge(ll a, char b[]) 
{ 
     ll num = reduceB(a, b); 
  
     return __gcd(a, num); 
} 
int main() 
{ 
     int t;
	 cin >> t;
	 while(t--){
	 	 ll a; 
	     char b[250] ; 
	     cin >> a >> b;
	     if (a == 0) 
	         cout << b << endl; 
	     else 
	         cout << gcdLarge(a, b) << endl;
	 } 
}



