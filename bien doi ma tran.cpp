#include <bits/stdc++.h> 
using namespace std; 
int findMinOpeartion(int matrix[100][100],int n) 
{ 
     int sumRow[n]={0}, sumCol[n]={0}; 
     for ( int i = 0; i < n; ++i) 
         for ( int j = 0; j < n; ++j) { 
             sumRow[i] += matrix[i][j]; 
             sumCol[j] += matrix[i][j];
         } 
     int maxSum = 0; 
     for ( int i = 0; i < n; ++i) { 
         maxSum = max(maxSum, sumRow[i]); 
         maxSum = max(maxSum, sumCol[i]); 
     } 
  
     int count = 0; 
     for ( int i = 0, j = 0; i < n && j < n;) { 
         int diff = min(maxSum - sumRow[i], maxSum - sumCol[j]); 
         matrix[i][j] += diff; 
         sumRow[i] += diff; 
         sumCol[j] += diff; 
         count += diff; 
         if (sumRow[i] == maxSum) 
             ++i; 
         if (sumCol[j] == maxSum) 
             ++j; 
     } 
     return count; 
} 
main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[100][100];
		for(int i=0; i<n; i++)
			for(int j=0; j<n; j++)
				cin>>a[i][j];
        cout << findMinOpeartion(a,n) << "\n" ;   
	}
}



