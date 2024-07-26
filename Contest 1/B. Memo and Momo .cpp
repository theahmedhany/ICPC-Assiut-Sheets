#include<bits/stdc++.h>

using namespace std;

int main(){

	long long number_1, number_2, game_number;
	cin >> number_1 >> number_2 >> game_number;

	if(number_1 % game_number == 0 && number_2 % game_number == 0) {
		cout << "Both" << endl;
	} else if (number_1 % game_number == 0 && number_2 % game_number != 0) {
		cout << "Memo" << endl;
	} else if (number_1 % game_number != 0 && number_2 % game_number == 0) {
		cout << "Momo" << endl;
	} else {
		cout << "No One" << endl;
	}

}
