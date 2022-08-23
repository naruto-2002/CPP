#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int m , n , p  ;
		cin >> m >> n >> p ;
		long long a[m] , b[n] , c[p] ; 
		for(int i = 0 ; i < m ; i++){
			cin >> a[i] ;
		}
		for(int i = 0 ; i < n ; i++){
			cin >> b[i] ;
		}
		for(int i = 0 ; i < p ; i++){
			cin >> c[i] ;
		}
		int i = 0 , j = 0 , k = 0 ; 
		int check = 0 ; 
		while(i <= m && j <= n && k <= p){
			if(a[i] == b[j] && b[j] == c[k]){
				check = 1 ;
				cout << a[i] << " ";
				i++ ; j++ ; k++ ;
			} else {
				while (a[i] < b[j] || a[i] < c[k])
    				i++;
    			while (b[j] < a[i] || b[j] < c[k])
    				j++;
    			while (c[k] < a[i] || c[k] < b[j])
    				k++;
			}
		}
		if(check==0){
			cout << "-1" << ' ' ; 
		} 
		cout << endl ;
	}
}

