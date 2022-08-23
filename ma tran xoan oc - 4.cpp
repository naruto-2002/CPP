#include<bits/stdc++.h>
using namespace std ;
void nhap(int a[20][20] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cin >> a[i][j] ;
		}
	}
}
void in(int a[20][20] , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			cout << a[i][j] << " ";
		}
		cout << endl ;
	}
}
void xuLy(int a[20][20] , int n){
	int b[400] ; int dem = 0 ;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			b[dem++] = a[i][j] ;
		}
	}
	sort(b,b+dem);
	int c[20][20] ;
	int hang = n - 1 ; int cot = n - 1 ; 
	int d = 0 ; int index = 0 ;
	while(d <= n/2){
		for(int i = d ; i <= cot ; i++ ) c[d][i] = b[index++] ;
		for(int i = d + 1 ; i <= hang ; i++) c[i][cot] = b[index++] ;
		for(int i = cot - 1 ; i >= d ; i--) c[hang][i] = b[index++] ;
		for(int i = hang - 1 ; i >= d+1 ; i--) c[i][d] = b[index++] ;
		d++ ; hang-- ; cot--;
	}
	in(c,n);
}
int main(){
	int n ; int a[20][20] ;
	cin >> n ;
	nhap(a,n);
	xuLy(a,n);
}

