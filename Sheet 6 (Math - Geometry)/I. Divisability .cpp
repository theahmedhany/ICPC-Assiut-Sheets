#include<bits/stdc++.h>

using namespace std;

long long summation (long long number){
  return number * (number + 1) / 2;
}

int main() {

	long long number_1, number_2, divisible;
	cin >> number_1 >> number_2 >> divisible;

	long long max_sum = max(number_1, number_2);
	long long min_sum = min(number_1, number_2);

	cout << (summation(max_sum / divisible) * divisible) - (summation( (min_sum - 1) / divisible ) * divisible) << endl;

}