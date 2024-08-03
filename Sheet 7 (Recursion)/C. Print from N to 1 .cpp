#include<bits/stdc++.h>

using namespace std;

int flag = 0;

void print(int number){

	if(number == 0){
		return;
	}

	if(flag){
		cout << " ";
	}

	cout << number--;
	flag = 1;

	return print(number);

}

int main(){

	int number;
	cin >> number;

	print(number);

}
