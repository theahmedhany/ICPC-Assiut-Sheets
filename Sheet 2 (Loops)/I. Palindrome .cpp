#include<bits/stdc++.h>

using namespace std;

int main(){

  string number_1;
  cin >> number_1;

  int counter = 0;
  int result_1, result_2 ;


  int size = number_1.size();
  char number_2[size];

  for (int i = size - 1; i >= 0; i--){
    number_2[counter] = number_1[i];
    counter++;
  }

  stringstream txt_1;
  txt_1 << number_1;
  txt_1 >> result_1;

  stringstream txt_2;
  txt_2 << number_2;
  txt_2 >> result_2;

  cout << result_2 << endl;

  if (result_1 == result_2){
    cout << "YES" << endl;
  } else {
		cout << "NO" << endl;
  }

}
