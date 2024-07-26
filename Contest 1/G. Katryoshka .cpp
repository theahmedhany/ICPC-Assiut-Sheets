#include<bits/stdc++.h>

using namespace std;

int main(){

	long long eye, mouth, body;
	cin >> eye >> mouth >> body;

	long long result = 0;

	long long min = min({ eye, mouth, body });

	result += min;
	eye -= min;
	mouth -= min;
	body -= min;

	min = min({ eye / 2 ,body });

	result += min;

	cout << result;

}
