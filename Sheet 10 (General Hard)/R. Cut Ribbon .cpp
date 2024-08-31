#include<bits/stdc++.h>

using namespace std;

int main() {

  int pieces, number_1, number_2, number_3;
  cin >> pieces >> number_1 >> number_2 >> number_3;

  int result = 0;

  for (int i = 0; i <= pieces / number_1; i++) {
    for (int j = 0; j <= pieces / number_2; j++) {
      int remaining_pieces = pieces - (number_1 * i + number_2 * j);
      if (remaining_pieces >= 0 && remaining_pieces % number_3 == 0) {
        int cutting = remaining_pieces / number_3;
        result = max(result, i + j + cutting);
      }
    }
  }

  cout << result << endl;

}
