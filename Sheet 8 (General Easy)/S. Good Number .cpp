#include<bits/stdc++.h>

using namespace std;

int main(){

	int size, range;
	cin >> size >> range;

	int counter = 0;
	int value;

	for(int i = 0; i < size; i++){
		cin >> value;

		bool arry[10] = {};
		bool flag = true;

		while (value > 0){
			int number = value % 10;
			arry[number] = true;
			value /= 10;
		}
	
		for (int j = 0; j <= range; j++){
			if (arry[j] == false){
				flag = false;
				break;
			}
		}
	
		if (flag){
			counter++;
		}
	}

	cout << counter << endl;

}
