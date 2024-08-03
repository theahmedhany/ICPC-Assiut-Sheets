#include<bits/stdc++.h>

using namespace std;

int main (){

	long long number_1, number_2;
	cin >> number_1 >> number_2;

	long long gcd_answer = gcd(number_1, number_2);
	long long lcm_answer = (number_1 * number_2) / gcd(number_1, number_2);

	cout << gcd_answer << " " << lcm_answer << endl;

}