#include <bits/stdc++.h>

using namespace std;

int main(){

	int size;
	string word;

	cin >> size >> word;

	string result = "";

	int counter = 0;

	while(size){
		if(size % 2 == 0){
			result = word[counter] + result;
		} else {
			result = result + word[counter];
		}

		counter++;
		size--;
	}

	cout << result;

}
