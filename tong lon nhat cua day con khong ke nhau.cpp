#include <bits/stdc++.h> 
using namespace std; 
long long FindMaxSum(long long arr[], long long n) 
{ 
     long long incl = arr[0]; 
     long long excl = 0; 
     long long excl_new; 
     int i; 
  
     for (i = 1; i < n; i++) 
     { 
         excl_new = (incl > excl) ? incl : excl; 
         incl = excl + arr[i]; 
         excl = excl_new; 
     } 
  
     return ((incl > excl) ? incl : excl); 
}  
int main() 
{ 
     int t;
     cin>>t;
     while(t--)
     {
     	long long n;
     	cin>>n;
     	long long a[n];
     	for(int i=0; i<n; i++) cin>>a[i];
     	cout<<FindMaxSum(a, n)<<endl;
     	
	 }
}



