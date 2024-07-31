#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2;
	cin >> number_1 >> number_2;

	int count = -1;

	for (int i = number_1; i <= number_2; i++){
		int test = 0;
		int example = i;

		while (example > 0){
			if (example % 10 != 4 && example % 10 != 7) {
				test++;
			}

			example = example / 10;
		}

		if (test == 0) {
			cout << i << " ";
			count++;
		}
	}

	if (count == -1){
		cout << -1;
	}

}