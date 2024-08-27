#include<bits/stdc++.h>

using namespace std;

int main(){

  const int max = 100;
  int birds[max];

  int size;
  cin >> size;

  for (int i = 0; i < size; i++){
    cin >> birds[i];
  }

  int cases;
  cin >> cases;

  for (int i = 0; i < cases; i++){
    int number_1, number_2;
    cin >> number_1 >> number_2;
    --number_1;

		if (number_1 != 0){
			birds[number_1 - 1] += number_2 - 1;
		}

		if (number_1 != size - 1){
			birds[number_1 + 1] += birds[number_1] - number_2;
		}

		birds[number_1] = 0;
  }

  for (int i = 0; i < size; i++){
    cout << birds[i] << endl;
  }

}