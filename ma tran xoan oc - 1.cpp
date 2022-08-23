#include<bits/stdc++.h>
using namespace std ;
void nhap(int a[100][100] , int n , int m){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> a[i][j] ;
		}
	}
}
void xuLy(int a[100][100] , int n , int m){
	int hang = n - 1 ; int cot = m - 1;
	int h = 0 ; int dem = 0 ;
	while(dem < n * m ){
		for(int i = h ; i <= cot ; i++){
			dem++;
			cout << a[h][i] << " " ;
		}
		for(int i = h + 1 ; i <= hang ; i++){
			dem++;
			cout << a[i][cot] << " " ;
		} 
		if(h != hang ){
			for(int i = cot - 1 ; i >= h ; i--){
				dem++;
				cout << a[hang][i] << " " ;
			}
		}
		if(h != cot){
			for(int i = hang -1 ; i >= h+1 ; i--){
				dem++;
				cout << a[i][h] << " " ;
			}
		} 
		h++ ; 
		hang-- ; cot--;
	}
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int a[100][100] ; 
		int n , m ; 
		cin >> n >> m ;
		nhap(a,n,m);
		xuLy(a,n,m);
		cout << endl ;
	}
}


