#include <iostream> 
using namespace std; 
  
// Function that print matrix in reverse spiral form. 
void ReversespiralPrint( int m, int n, int a[102][102], int k1) 
{ 
     // Large array to initialize it 
     // with elements of matrix 
     long int b[10001]; 
      
     /* k - starting row index 
     l - starting column index*/ 
     int i, k = 0, l = 0; 
      
     // Counter for single dimension array 
     //in which elements will be stored 
     int z = 0; 
      
     // Total elements in matrix 
     int size = m*n; 
  
     while (k < m && l < n) 
     { 
         // Variable to store value of matrix. 
         int val; 
          
         /* Print the first row from the remaining rows */ 
         for (i = l; i < n; ++i) 
         { 
             // printf("%d ", a[k][i]); 
             val = a[k][i]; 
             b[z] = val; 
             ++z; 
         } 
         k++; 
  
         /* Print the last column from the remaining columns */ 
         for (i = k; i < m; ++i) 
         { 
             // printf("%d ", a[i][n-1]); 
             val = a[i][n-1]; 
             b[z] = val; 
             ++z; 
         } 
         n--; 
  
         /* Print the last row from the remaining rows */ 
         if ( k < m) 
         { 
             for (i = n-1; i >= l; --i) 
             { 
                 // printf("%d ", a[m-1][i]); 
                 val = a[m-1][i]; 
                 b[z] = val; 
                 ++z; 
             } 
             m--; 
         } 
  
         /* Print the first column from the remaining columns */ 
         if (l < n) 
         { 
             for (i = m-1; i >= k; --i) 
             { 
                 // printf("%d ", a[i][l]); 
                 val = a[i][l]; 
                 b[z] = val; 
                 ++z; 
             } 
             l++; 
         } 
     } 
     cout << b[k1 - 1];
} 
  
/* Driver program to test above functions */ 
int main() 
{ 
     int t;
	 cin >> t;
	 while(t--){
	 	int a[102][102];
	 	int R,C,k;
	 	cin >> R >> C >> k;
	 	for(int i = 0;  i < R; i++){
	 		for(int j = 0; j < C; j++){
	 			cin >> a[i][j];
			 }
		 }
        ReversespiralPrint(R, C, a, k);
        cout << endl;
	 }  
}



