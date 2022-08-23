#include<bits/stdc++.h>
using namespace std ;
void nhap(int a[] , int n){
	for(int i = 0 ; i < n ; i++){
		cin >> a[i] ;
	}
}
void xuLy(int a[] , int n){
	int dem = 0 ;
	int c = 0 ; int d = n - 1 ;
	while(c<=d){
		if(a[c] < a[d]){
			dem++;
			a[c+1] = a[c] + a[c+1] ;
			c++;
		} else if(a[c] > a[d]){
			dem++;
			a[d-1] = a[d] + a[d-1] ;
			d--;
		} else {
			c++ ; d-- ;
		}
 	}
 	cout << dem << endl ;
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ; 
		cin >> n ;
		int a[n] ;
		nhap(a,n);
		xuLy(a,n);
	}
}

