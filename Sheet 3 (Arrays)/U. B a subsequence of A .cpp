#include<bits/stdc++.h>

using namespace std;

int main() {

  long long size, size_sequence;
  cin >> size >> size_sequence;

  long long arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }

  long long arry_sequence[size_sequence];

  for (int i = 0; i < size; i++){
    cin >> arry_sequence[i];
  }

  int test = 0;
  int counter = 0;

  for (int i = 0; i < size; i++){
    if (arry[i] == arry_sequence[test]){
      counter++;
      test++;
    }
  }

  if (test == size_sequence){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}