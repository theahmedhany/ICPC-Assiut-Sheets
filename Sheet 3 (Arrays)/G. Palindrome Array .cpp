#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	int arry[size];
	int flag = 0;

	for(int i = 0; i < size; i++){
		cin >> arry[i];
	}

	for(int i = 0; i <= size / 2; i++){
		if(arry[i] != arry[size - 1 - i]){
			flag = 1;
			break;
		}
	}

	if(flag == 0){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
