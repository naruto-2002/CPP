#include<iostream>
#include<string>
using namespace std;
int check(string a) {
	int n = a.length();
	int i, sum = 0;
	if(a.at(0)=='0'){
	    return 0;
	}
	for (i = 0; i < n; i++) {
		sum += (a[i] - '0');
	}
	if (sum % 9 != 0) {
		return 0;
	}
	return 1;
}
int main() {
	int i, n;
	cin >> n;
	while (n--) {
		string arr;
		cin >> arr;
		if (check(arr)) {
			cout << "1" << endl;
		}
		else cout << "0" << endl;
	}
	return 0;
}

