#include<bits/stdc++.h>
using namespace std;
int ktra(string s){
	int i,size=s.length()-1;
	int a0=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
	for(i=0;i<size;i++){
		if(!isdigit(s[i])||s[0]=='0') return 0;
		int n=(int)s[i]-48;
		if(n==0) a0=1;
		if(n==1) a1=1;
		if(n==2) a2=1;
		if(n==3) a3=1;
		if(n==4) a4=1;
		if(n==5) a5=1;
		if(n==6) a6=1;
		if(n==7) a7=1;
		if(n==8) a8=1;
		if(n==9) a9=1;
		if(a1+a2+a3+a4+a5+a6+a7+a8+a9+a0==10) return 1;
	}
	return 2;
} 

int main() {
    int t;
    scanf("%d\n",&t);
    while(t--){
    	int x;
    	char s[1000];
    	fgets(s,1000,stdin);
    	x=ktra(s);
		if(x==1) 
			printf("YES\n");
		else 
			if (x==2)	printf("NO\n");
			else 	printf("INVALID\n");
	}
    return 0;
}

