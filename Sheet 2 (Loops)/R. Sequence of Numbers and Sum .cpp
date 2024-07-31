#include<bits/stdc++.h>

using namespace std;

int main(){

	int number_1, number_2;

	while(cin >> number_1 >> number_2){
		long long sum = 0;
		int min = 0, max = 0;

		if(number_1 <= 0 || number_2 <= 0){
			return 0;
		}

		if(number_1 >= number_2){
			max = number_1;
			min = number_2;
		} else {
			max = number_2;
			min = number_1;
		}

		for(int i = min; i <= max; i++){
			cout << i << " ";
			sum += i;
		}

		cout << "sum =" << sum << endl;
	}

}
