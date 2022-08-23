#include<bits/stdc++.h>
using namespace std ;
struct tg{
	int h ;
	int p ;
	int s ;
	int sum ;
};
struct tg ds[500] ; int n ; 
void nhap(){
	for(int i = 0 ; i < n ; i++){
		cin >> ds[i].h >> ds[i].p >> ds[i].s ;
	}
}
void xuLy(){
	for(int i = 0 ; i < n ; i++){
		ds[i].sum = ds[i].h * 3600 + ds[i].p * 60 + ds[i].s ;
	}
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(ds[i].sum > ds[j].sum){
				tg tmp = ds[i] ; ds[i] = ds[j] ; ds[j] = tmp ;
			} else {
				continue ;
			}
		}
	}
	for(int i = 0 ; i < n ; i++){
		cout << ds[i].h << " " << ds[i].p << " " << ds[i].s << endl ;
	}
}
int main(){
	cin >> n ;
	nhap();
	xuLy();
}

