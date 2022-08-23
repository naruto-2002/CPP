#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int m ; char s[100] ;
		cin >>  m ;
		cin.ignore();
		cin.getline(s,sizeof(s)) ;
		char *p = strtok(s," ");
		char arr[100][100] ; int n = 0;
		while(p!=NULL){
			p[0] = toupper(p[0]);
			for(int i = 1 ; i < strlen(p) ; i++){
				p[i] = tolower(p[i]) ;
			}
			strcpy(arr[n++],p);
			p = strtok(NULL," ");
		}
		if(m==1){
			cout << arr[n-1] << " ";
			for(int i = 0 ; i < n - 1 ; i++){
				cout << arr[i] << " ";
			}
		} else if(m==2){
			for(int i = 1 ; i < n ; i++){
				cout << arr[i] << " " ;
			}
			cout << arr[0] ; 
		}
		cout << endl ; 
	}
}

