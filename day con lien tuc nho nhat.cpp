#include<bits/stdc++.h>
using namespace std;
int xuly( int arr[], int n, int x){ 
     int curr_sum = 0, min_len = n + 1; 
     int start = 0, end = 0; 
     while (end < n) { 
         while (curr_sum <= x && end < n) 
             curr_sum += arr[end++]; 
         while (curr_sum > x && start < n) { 
             if (end - start < min_len) 
                 min_len = end - start; 
             curr_sum -= arr[start++]; 
         } 
     } 
     if(min_len == n + 1) return -1;
	 else return min_len; 
} 
main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int  a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
	    int len = xuly(a, n, m);
		cout << len << '\n';
	}
}


