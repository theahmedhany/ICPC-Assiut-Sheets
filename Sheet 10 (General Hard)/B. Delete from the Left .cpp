#include <bits/stdc++.h>

using namespace std;

int main() {

  string txt_1, txt_2;
  cin >> txt_1 >> txt_2;

  int size_1 = txt_1.size();
  int size_2 = txt_2.size();

  int reverse_1 = size_1 - 1;
  int reverse_2 = size_2 - 1;

  int result = 0;

  while (reverse_1 >= 0 && reverse_2 >= 0 && txt_1[reverse_1] == txt_2[reverse_2]) {
    reverse_1--;
    reverse_2--;
    result++;
  }

  cout << (size_1 - result) + (size_2 - result) << endl;

}
