#include<bits/stdc++.h>
using namespace std ;
void nhap(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
}
void xuLy(int a[] , int n){
	int kt = 0 ;
	for(int i = 0 ; i < n ; i++){
		if(a[i] >= 0){
			kt = 1 ;
			break ;
		}
	}
	if(kt==0){
		cout << "-1" ;
	} else {
		long long  sum = 0 ; long long  m = -1e9 ;
		for(int i = 0 ; i < n ; i++){
			sum = sum + a[i] ; 
			if(sum < 0) sum = 0 ;
			if(m < sum) m = sum ;
		}
		cout << m ; 
	}
}
int main(){
	int t ;
	cin >> t  ;
	while(t--){
		int n ;
		cin >> n ;
		int a[n] ;
		nhap(a,n);
		xuLy(a,n);
		cout << endl ;
	}
}

