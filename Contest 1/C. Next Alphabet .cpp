#include<bits/stdc++.h>

using namespace std;

int main(){

	char letter;
	cin >> letter;

	int letter_ascii = letter;

	if (letter_ascii >= 97 && letter_ascii < 122) {

		letter_ascii++;
		char final_letter = letter_ascii;

		cout << final_letter;

	} else if (letter_ascii == 122) {

		cout << "a";

	}

}