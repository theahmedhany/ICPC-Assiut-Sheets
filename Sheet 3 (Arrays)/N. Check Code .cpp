#include<bits/stdc++.h>

using namespace std;

int main(){

  int number_1, number_2;
  cin >> number_1 >> number_2;

  string code;
  cin >> code;

  if (code.size() != number_1 + number_2 + 1){
    cout << "No" << endl;
    return 0;
  }

  if (code[number_1] != '-'){
    cout << "No" << endl;
    return 0;
  }

  int counter = 0;

  for (int i = 0; i < code.size(); i++){
    if (code[i] >= 48 && code[i] <= 57 && i != number_1){
      counter++;
    }
  }

  if (counter == number_1 + number_2){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}