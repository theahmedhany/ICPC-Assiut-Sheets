#include<bits/stdc++.h>

using namespace std;

void print(int number){

	for(int i = 1; i <= number; i++) {
		if(i != 1){
			cout << " ";
		}

		cout << i;
	}

}

int main() {

	int number;
	cin >> number;

	print(number);
	
}


