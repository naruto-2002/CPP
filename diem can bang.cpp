#include<bits/stdc++.h>
using namespace std ;
void nhap(int a[] , int n){
	for(int i = 0 ; i < n ; i++)
		cin >> a[i] ;
}
void xuLy(int a[] , int n){
	int sum = 0 ; int kt = 0 ;
	for(int i = 0 ; i < n ; i++){
		sum = sum + a[i] ;
	}
	int tong = 0 ; int k = 1 ;
	for(int i = 0 ; i < k ; i++){
		tong = tong + a[i] ;
		if(tong == sum -tong - a[k]){
			kt = 1 ;
			cout << k + 1 ;
			break ;
		} else {
			k++;
		}
		if(k>n) break ;
	}
	if(kt==0) cout << "-1" ;
}
int main(){
	int t ;
	cin >> t;
	while(t--){
		int n ;
		cin >> n ; 
		int a[n] ;
		nhap(a,n);
		xuLy(a,n);
		cout << endl ;
	}
}

