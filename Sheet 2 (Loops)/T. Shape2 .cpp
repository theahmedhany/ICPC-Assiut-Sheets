#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	for (int i = 1; i <= counter; i++) {

		for (int j = 1; j <= counter - i; j++) {
			cout << " ";
		}

		for (int k = 1; k <= (2 * i) - 1; k++) {
			cout << "*";
		}

		cout << endl;

	}

}
