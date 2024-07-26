#include<bits/stdc++.h>

using namespace std;

int main(){

	int odd, even;
	cin >> odd >> even;

	if (odd - even == 1 || even - odd == 1 || (odd == even && even != 0 && odd != 0)) {
		cout << "YES";
	} else {
		cout << "NO";
	}

}
