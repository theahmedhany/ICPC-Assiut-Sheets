#include<bits/stdc++.h>

using namespace std;

int main (){

	int size;
	cin >> size;

	string number;
	cin >> number;

	int sum = 0;
	
	for(int i = 0; i < size; i++){
		sum += (number[i] - '0');
	}

	cout << sum << endl;

}
