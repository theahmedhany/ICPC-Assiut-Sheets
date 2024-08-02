#include <bits/stdc++.h>

using namespace std;

int main () {

	string value;
	cin >> value;

  int cost[26];

	for(int i = 0; i < 26; i++){
		cin >> cost[i];
	}

	int size = value.size();
	int counter = 0;

	for(int i = 0; i < size; i++){
		counter = 0;

		if(value[i] == '?'){
			for(int j = i; j < size; j++){
				if(value[j] == '?'){
					counter++;
				} else {
					break;
				}
			}

			if(counter == size){
				cout << "0" << endl;

				for(int j = 0; j < size; j++){
					cout << "a";
				}

				return 0;
			} else {
				if(i == 0){
					int max = INT_MAX;
					int index;

					for(int j = 0; j < value[counter] - 97 + 1; j++){
						int my_cost = abs(cost[value[counter] - 97] - cost[j]);

						if(my_cost < max){
							max = my_cost;
							index = j;
						}
					}
					char special_character = index + 97;

					for(int j = 0; j < counter; j++){
						value[j] = special_character;
					}

					i += counter;
				} else if (i + counter == size){
					int max = INT_MAX;
					int index;

					for(int j = 0; j < value[i - 1] - 97 + 1; j++){
						int my_cost = abs(cost[value[i - 1] - 97] - cost[j]);

						if(my_cost < max){
							max = my_cost;
							index = j;
						}
					}

					char special_character = index + 97;
					for(int j = i; j < size; j++){
						value[j] = special_character;
					}

					break;
				} else {
					int max = INT_MAX;
					int index;

					for(int j = 0; j < 26; j++){
						int my_cost = abs(cost[value[i - 1] - 97] - cost[j]) + abs(cost[j] - cost[value[i + counter] - 97]);

						if(my_cost < max){
							max = my_cost;
							index = j;
						}
					}

					char special_character = index + 97;

					for(int j = i; j < i + counter; j++){
						value[j] = special_character;
					}

					i += counter;
				}
			}
		}
	}
	
	long long finalCost = 0;
  
	for(int i = 0; i < size - 1; i++){
		finalCost += abs(cost[value[i] - 97] - cost[value[i + 1] - 97]);
	}

	cout << finalCost << endl;
	cout << value << endl;
	
}