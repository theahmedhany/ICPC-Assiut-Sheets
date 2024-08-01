#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	long long sum = 0;

	for(int i = 1; i <= size; i++){
		int number;
		cin >> number;

		sum += number;
	}

	cout << abs(sum) << endl;

}
