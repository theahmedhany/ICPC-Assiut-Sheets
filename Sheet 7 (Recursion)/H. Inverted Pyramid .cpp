#include<bits/stdc++.h>

using namespace std;

int input;

void invertedPyramid(int row){

	if(row == 0){
		return;
	}

	for(int i = 1; i <= input - row; i++){
		cout << " ";
	}

	for(int i = 1; i <= row * 2 - 1; i++){
		cout << "*";
	}

	cout << endl;

	invertedPyramid(row - 1);

}

int main(){

	cin >> input;

	invertedPyramid(input);

}
