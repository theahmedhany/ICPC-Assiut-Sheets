#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];

	for(int i = 0; i < size; i++){
		cin >> arry[i];
	}

	sort(arry, arry + size);

	string result = "NO";

	for (int i = size - 1; i >= 2; i--) {
		if (arry[i] + arry[i - 1] > arry[i - 2] 
					&& arry[i - 1] + arry[i - 2] > arry[i] 
					&& arry[i] + arry[i - 2] > arry[i - 1]) {
			result = "YES";
			break;
		}
	}

	cout << result;

}
