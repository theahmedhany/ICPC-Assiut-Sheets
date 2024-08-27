#include<bits/stdc++.h>

using namespace std;

int main(){

	string txt;

	int charCounter[] = {0 , 0 , 0};

	for (int i = 0; i < 3; i++){
		cin >> txt;

		if (txt[1] == '>'){
			charCounter[txt[0] - 'A']++;
		} else {
			charCounter[txt[2] - 'A']++;
		}
	}
	
	if (charCounter[0] == charCounter[1] || charCounter[1] == charCounter[2]){
		cout << "Impossible";
		return 0;
	}
	

	for (int i = 0; i < 3; i++){
		if (charCounter[0] == i){
			cout << "A";
		} else if (charCounter[1] == i) {
			cout << "B";
		} else {
			cout <<"C";
		}
	}

}