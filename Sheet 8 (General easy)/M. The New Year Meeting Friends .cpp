#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2, number_3;
	cin >> number_1 >> number_2 >> number_3;

	cout << max(max(number_1, number_2), number_3) - min(min(number_1, number_2), number_3);

}
