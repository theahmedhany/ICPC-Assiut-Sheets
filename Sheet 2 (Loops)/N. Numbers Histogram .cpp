#include<bits/stdc++.h>

using namespace std;

int main(){

	char symbol;
	cin >> symbol;

	int lines;
	cin >> lines;

	int times;

	for (int i = 1; i <= lines; i++){
		cin >> times;
		
		for (int i = 1; i <= times; i++){
			cout << symbol;
		}

		cout << endl;
	}

}