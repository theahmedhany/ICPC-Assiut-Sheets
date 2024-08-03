#include <bits/stdc++.h>

using namespace std;

long long Number(char txt){

	if(txt >= '0' && txt <= '9'){
		return txt - '0';
	} else {
		return txt - 'A' + 10;
	}

}

char resultNumber(long long digit){

	if(digit >= 0 && digit <= 9){
		return digit + '0';
	} else {
		return digit + 'A' - 10;
	}

}

long long toDeciml(char* value, long long base){

	long long size = strlen(value);
	long long power = 1;
	long long result = 0;

	for(int i = size - 1; i >= 0; i--){
		result += Number(value[i]) * power;
		power *= base;
	}

	return result;

}

char * fromDecimal(char answer[], long long base, long long number){

	int index = 0;

	while(number > 0){
		answer[index++] = resultNumber(number % base);
		number /= base;
	}

	answer[index] = '\0';
	reverse(answer, answer + index);

	return answer;

}

int main() {

	int cases;
	cin >> cases;

	if(cases == 1){

		char arry[35] = {""};

		cin >> arry;

		long long base;
		cin >> base;

		cout << toDeciml(arry, base);

	} else {

		long long number, base;
		cin >> number >> base;

		char result[100];

		cout << fromDecimal(result, base, number);

	}

}
