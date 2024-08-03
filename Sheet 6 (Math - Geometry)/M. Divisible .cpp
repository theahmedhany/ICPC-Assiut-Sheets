#include<bits/stdc++.h>

using namespace std;

int main(){

	string number_1;
	int number_2;
	cin >> number_1 >> number_2;

	long long result = 0;
	
	for(int i = 0; i < number_1.size(); i++){
		result *= 10;
		result += number_1[i] - '0';
		result %= number_2;
	}

	if(result == 0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

}
