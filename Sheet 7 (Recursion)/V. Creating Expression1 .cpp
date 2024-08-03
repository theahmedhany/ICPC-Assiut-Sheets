#include <bits/stdc++.h>

using namespace std;

long long elements, result;
long long arry[21];

bool createExpression(long long summation, long index){

	if(index == elements){
		return summation == result;
	}

	bool roll_1 = createExpression(summation + arry[index], index + 1);
	bool roll_2 = createExpression(summation - arry[index], index + 1);

	return roll_1 || roll_2;

}

int main() {

	cin >> elements >> result;

	for(int i = 0; i < elements; i++){
		cin >> arry[i];
	}

	if(createExpression(arry[0], 1)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
