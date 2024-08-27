#include<bits/stdc++.h>

using namespace std;

int main(){

	int students , subjects;
	cin >> students >> subjects;

	char arry_1[students * subjects];
	char arry_2[students * subjects];
	
	for(int i = 0; i < students * subjects; i++){
		cin >> arry_1[i];
	}

	int index = 0;

	for(int i = 0; i < subjects; i++){
		int max = arry_1[i];

		for(int j = i + subjects; j < students * subjects; j++){

			if(max < arry_1[j] && (j - i) % subjects == 0){
				max = arry_1[j];
			}

		}

		arry_2[index] = max;
		index++;
	}

	int best = 0;

	for(int z = 0; z < students; z++){
		int x = 0;

		for(int i = z * subjects; i < (z + 1) * subjects; i++){

			if(arry_1[i] == arry_2[x]){
				best++;
				break;
			}

			x++;

		}
	}

	cout << best;
	
}