#include<bits/stdc++.h>
using namespace std;
void Tich(int A[51][51], int B[51][51], int C[51][51], int n, int m, int p)
{
   for(int i = 0; i<n ; i++)
   for(int k = 0; k<n ; k++)
   {
      C[i][k] = 0;
      for(int j = 0; j<m ; j++)
         C[i][k] = C[i][k] + A[i][j]*B[j][k];
   }
}
main()
{
	int n,m,p;
	cin>>n>>m>>p;
	int a[51][51],b[51][51],c[51][51];
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin>>a[i][j];
	for(int i=0; i<m; i++)
		for(int j=0; j<p; j++)
			cin>>b[i][j];
			
			
	Tich(a,b,c,n,m,p);
	for(int i=0; i<n; i++)
		{
			for(int j=0; j<p; j++)
			{
				cout<<c[i][j]<<' ';
			}
			cout<<endl;
		}
	
}

