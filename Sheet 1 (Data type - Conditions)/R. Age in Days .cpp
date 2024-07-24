#include<bits/stdc++.h>

using namespace std;

int main(){

	long long days_number;
	cin >> days_number;

	int year = days_number / 365;
	int result = days_number - (year * 365);
	int month = result / 30;
	int day = result - (month * 30);

	cout << year << " years\n";
	cout << month << " months\n";
	cout << day << " days\n";

}
