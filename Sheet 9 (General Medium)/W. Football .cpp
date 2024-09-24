#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  map<string, int> score;

  for (int i = 0; i < size; i++) {
    string key;
    cin >> key;

    if (score[key] == 0){
      score[key] = 1;
    } else {
      score[key] = score[key] + 1;
    }
  }

  map <string, int> :: iterator final_score;

  string result_key = score.begin() -> first;
  int result_value = score.begin() -> second;

  for (final_score = score.begin(); final_score != score.end(); final_score++) {
    if (final_score -> second > result_value) {
      result_key = final_score -> first;
      result_value = final_score -> second;
    }
  }

  cout << result_key << endl;

}
