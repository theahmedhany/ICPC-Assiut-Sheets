#include<bits/stdc++.h>

using namespace std;

int sum(int number_1, int number_2){

	int total = number_1 + number_2;

	return total;

}

int main() {

	int number_1, number_2;
	cin >> number_1 >> number_2;

	int result = sum(number_1, number_2);

	cout << result;
	
}

