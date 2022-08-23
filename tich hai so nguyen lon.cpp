#include<iostream>
#include<string>
using namespace std;
int Ap[1003];
int Bp[1003];
int c[3006];
int tach (string a, string b, int A[], int B[]) {
    int lenA = a.size();
    int lenB = b.size();
   
    int len;
    if (lenA>lenB) len=lenA;
    else len = lenB;
   
    lenA--;
    lenB--;
    for (int i=len-1; i>=0; i--) {
        if (lenA>=0) {
            A[i] = a[lenA]-'0';
            lenA--;
        } else A[i]=0;
       
        if (lenB>=0) {
            B[i] = b[lenB]-'0';
            lenB--;
        } else B[i]=0;
    }
    return len;
}
int tong (int A[], int B[], int len, int C[]) {
    for (int i=len-1; i>=0; i--) {
        if (i!=0) {
            int x = A[i]+B[i];
            C[i]=x%10;
            B[i-1]=B[i-1]+(x/10);
        } else C[i]=A[i]+B[i];
    }
    return len;
}
void sc (int A[], int B[], int len) {
    for (int i=0; i<len; i++) {
        A[i]=B[i];
    }
}
 
void tich (int A[], int B[], int len, int C[]) {
	int dem1=0,dem2=0;
	for(int i=0; i<len; i++)
	{
		if(A[i]==0)
		{
			dem1++;
		}
		
		if(B[i]==0)
		{
			dem2++;
		}
	}
	
	if(dem1==len||dem2==len)
	{
		cout<<"0";
	}
    int Btg[2006];
    int Ctg[2006];
    int lenMax=2*len;
    for (int i=0; i<lenMax; i++) {
        Btg[i]=0;
        Ctg[i]=0;
    }
    for (int i=len-1; i>=0; i--) {
        lenMax--;
        int k=lenMax;
        for (int j=0; j<2*len; j++) {
            Btg[j]=0;
        }
        for (int j=len-1; j>=0; j--) {
            int x=Btg[k]+B[i]*A[j];
            Btg[k]=(x)%10;
            Btg[k-1]=(x)/10;
            k--;
        }
        tong (Ctg, Btg, 2*len, C);
        sc (Ctg, C, 2*len);
    }
    for (int i=0; i<2*len; i++) {
        if(C[i]!=0)
        {
        	for(int j=i; j<2*len; j++)
        	{
        		cout<<C[j];
			}
			break;
		}
    }
    
 
}
main()
{
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		int len  = tach (str1,str2,Ap,Bp);
		tich(Ap,Bp,len,c);
		cout<<endl;
	}
}  

