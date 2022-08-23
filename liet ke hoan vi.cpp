#include<iostream>
using namespace std;
#define N 25
int n;
int x[N];
void update()
{
	int ok=1;
	for(int i=1; i<=n; i++)
		for(int j=i+1; j<=n; j++)
	     if(x[i]==x[j]) ok=0;
		 
		
    if(ok==1)
	{
		for(int i=1; i<=n; i++) cout << x[i];	
        cout <<' ';
	}
	
	
}
 
void backtracking(int id)
{
	for(int i=1; i<=n; i++)
	{
		x[id]=i;
		if(id==n)
		update();
		else backtracking(id+1);
	}
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    backtracking(1);
	    cout<<endl;
	}
}  

