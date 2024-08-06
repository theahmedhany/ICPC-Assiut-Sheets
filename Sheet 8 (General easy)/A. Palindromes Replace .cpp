#include<bits/stdc++.h>

using namespace std;

bool check(string word){

	int size = word.size() / 2;
	bool result = true;

	for(int i = 0, j = word.size() - 1; i < size; i++, j--){

		if(word[i] == word[j] || (word[i] == '?' && word[j] !='?') || (word[i] != '?' && word[j] =='?') || word == "?"){
			result = true;
		} else {
			result = false;
			break;
		}

	}

	return result;

}

int main() {

	string value;
	cin >> value;

	int size = value.size() / 2;

	if(value != "?"){

		if(check(value)){

			for(int i = 0, j = value.size() - 1; i <= size; i++, j--){

				if(value[i] == '?' && value[j] != '?'){
					value[i] = value[j];
				} else if (value[i] != '?' && value[j] == '?'){
					value[j] = value[i];
				} else if(value[i] == '?' && value[j] == '?'){
					value[i] = 'a';
					value[j] = 'a';
				}

			}

			cout << value << endl;

		} else {

			cout << -1 << endl;

		}

	} else {

		cout << "a" << endl;

	}

}
