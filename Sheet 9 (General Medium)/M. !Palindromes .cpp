#include<bits/stdc++.h>

using namespace std;

int main(){

	string word;
	cin >> word;

	int size = word.size();
	int arrow = size - 1;
	bool position = 0;

	for(int i = 0; i < size; i++){
		if(word[i] != word[arrow]){
			position = 1;
		}

		arrow--;
	}

	if(position == 1){
		cout << size;
		return 0;
	}

	long long arry[10000];

	for(int i = 0; i < size; i++){
		arry[word[i]]++;
	}

	long long result = 0;

	for(int i ='a'; i <= 'z'; i++){
		if(arry[i] > 0){
			result++;
		}
	}

	if (result == 1) {
		cout << 0;
	} else {
		cout << size - 1 << endl;
	}

}
