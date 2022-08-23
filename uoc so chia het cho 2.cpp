#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int count=0;
		for(long long i=1; i<=sqrt(n); i++){
			if(n%i==0){
				if(i%2==0){
					count++;
				}
			    if(((n/i)%2==0)&&(n/i)!=i){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}

