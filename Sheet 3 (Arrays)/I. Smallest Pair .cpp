#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  cin >> size;

  while (size--){
    int number;
    cin >> number;

    int arry[number];

    for (int i = 0; i < number; i++){
      cin >> arry[i];
		}

    int answer = INT_MAX;

    for (int i = 0; i < number; i++){
      for (int j = i + 1; j < number; j++){
        answer = min (answer, arry[i] + arry[j] + j - i);
      }
    }

    cout << answer << endl;
  }

}