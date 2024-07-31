#include<bits/stdc++.h>

using namespace std;

int main(){

	int counter;
	cin >> counter;

	for (int i = 2; i <= counter; i++){
		int flag = 0;

		for (int j = 2; j < i; j++){
			if (i % j == 0){
				flag = 1;
				break;
			}
		}

		if (flag == 0){
			cout << i << " ";
		}
	}

}
