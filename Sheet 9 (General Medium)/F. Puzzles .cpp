#include<bits/stdc++.h>

using namespace std;

int main() {

	int students, puzzle;
	cin >> students >> puzzle;

	int arry[puzzle];

	for(int i = 0; i < puzzle; i++){
		cin >> arry[i];
	}

	sort(arry, arry + puzzle);

	long long answer = arry[students - 1] - arry[0];

	for(int i = 1; i <= puzzle - students; i++){
		if(arry[i + students - 1] - arry [i] < answer){
			answer = arry[i + students - 1] - arry [i];
		}
	}

	cout << answer;

}
