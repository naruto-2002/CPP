#include<bits/stdc++.h>
using namespace std;
#define PI 3.141592653589793238
main(){
	int t;
	cin>>t;
	while(t--){
		double a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		double c1,c2,c3,p,dt,R,dt1;
		c1=sqrt((a-c)*(a-c)+(b-d)*(b-d));
		c2=sqrt((a-e)*(a-e)+(b-f)*(b-f));
		c3=sqrt((c-e)*(c-e)+(d-f)*(d-f));
		p=(c1+c2+c3)/2;
		dt=sqrt(p*(p-c1)*(p-c2)*(p-c3));
		R=(c1*c2*c3)/(4*dt);
		dt1= PI*R*R;
		if(c1+c2>c3&&c1+c3>c2&&c2+c3>c1){
				cout<<setprecision(3)<<fixed<<dt1;
		}else{
			
				cout<<"INVALID";
		}
		cout<<endl;
	}
}

