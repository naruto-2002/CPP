#include<iostream>
#include<string>
using namespace std;
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
 
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int a[1002],b[1002],sum[2006];
	    int len= tach(str1,str2,a,b);
		int len1=tong(a,b,len,sum);
		for(int i=0; i<len1; i++)
		{
					cout<<sum[i];
		}
		cout<<endl;
	}
}  

