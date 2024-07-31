#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	for(int i = 1; i <= counter; i++){
		for(int j = 1; j <= i; j++){
			cout << "*";
		}

		cout << endl;
	}

}
