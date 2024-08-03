#include<bits/stdc++.h>

using namespace std;

long long input;

bool reachValue(long long number){

	if(input < number){
		return false;
	} else if (input == number){
		return true;
	} else {
		return reachValue(number * 10) || reachValue(number * 20);
	}

}

int main(){

	long long cases;
	cin >> cases;

	while(cases--){
		cin >> input;

		if(reachValue(1)){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

}
