#include<bits/stdc++.h>
using namespace std;
main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		long long max=-1000000000,sum=0,k1=-10000000000;
		for(int i=0; i<=n-k; i++){
			for(int j=i; j<k+i; j++){
				sum+=a[j];
			}
		    if(sum/k>max) max=(sum/k);
			sum=0;
		}
		long long sum1=0;
		for(int i=0; i<=n-k; i++){
			for(int j=i; j<k+i; j++){
				sum1+=a[j];
			}
		    if(sum1/k==max){
			    	if(sum1%k>k1) k1=sum1%k;
				}
				sum1=0;
			}
		long long sum2=0;
		for(int i=0; i<=n-k; i++){
			for(int j=i; j<k+i; j++){
				sum2+=a[j];
			}
		    if((sum2/k)==max&&sum2%k==k1){
			    	for(int j=i; j<k+i; j++){
					cout<<a[j]<<' ';
				}
			}
			sum2=0;
		}
		cout<<endl;
		
	}
}

