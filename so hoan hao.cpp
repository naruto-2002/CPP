#include<bits/stdc++.h>
using namespace std;
    long long perfectNum(int x){
        long long ans=pow(2,x-1)*(pow(2,x)-1);
        return ans;
    }
int main(){
        long long a=perfectNum(2);
        long long b=perfectNum(3);
        long long c=perfectNum(5);
        long long d=perfectNum(7);
        long long e=perfectNum(13);
        long long f=perfectNum(17);
        long long g=perfectNum(19);
        long long h=perfectNum(31);
    int test;   cin >> test;
    while(test--){
        long long n;    cin >> n;
        if(n!=a&&n!=b&&n!=c&n!=d&&n!=e&&n!=f&&n!=g&&n!=h){
            cout << "0" << endl;
        }
        else cout << "1" <<endl;
    }
return 0;
}


