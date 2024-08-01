#include<bits/stdc++.h>

using namespace std;

int main (){

	int size;
	cin >> size;

	int arry[size];

	for (int i = 0; i < size; i++){
		cin >> arry[i];
	}

	for (int i = 0; i < size; i++){
		bool flag = false;

		for (int j = 0; j < size - 1 - i; j++){
			if (arry[j] > arry[j + 1]){
				swap(arry[j] , arry[j + 1]);
				flag = true;
			}
		}

		if (flag == false)
			break;
	}

	for (int k = 0; k < size; k++){
		cout << arry[k] << " ";
	}

}