#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	cin >> size;

	vector<int> arry(size);

	for (int i = 0; i < size; i++){
		cin >> arry[i];
	}
	

	int max_position = 0;
	int min_position = 0;

	int max_element = arry[0];
	int min_element = arry[0];

	for(int i = 1; i < size; i++){

		if(max_element < arry[i]){
			max_element = arry[i];
			max_position = i;
		}

		if(min_element >= arry[i]){
			min_element = arry[i];
			min_position = i;
		}

	}

	int answer = (size - 1 - min_position) + (max_position - 0);

	if(max_position > min_position ){
		answer--;
	}

	cout << answer << endl;

}
