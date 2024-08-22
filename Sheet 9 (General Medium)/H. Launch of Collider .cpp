#include<bits/stdc++.h>

using namespace std;

int main(){

	int size;
	string sequence;
	cin >> size >> sequence;

	long long arry[size];

	for(int i = 0; i < size; i++){
		cin >> arry[i];
	}

	long long time = 0;
	long long min_time = 100000000000;

	for(int i = 0; i < size - 1; i++){
		if(sequence[i] == 'R' && sequence[i + 1] == 'L'){
			time = (arry[i + 1] - arry[i]) / 2;
			if(time < min_time){
				min_time = time;
			}
		}
	}

	if (min_time == 100000000000) {
		cout << -1 << endl;
	} else {
		cout << min_time << endl;
	}

}
