#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  while (size--) {
    int number;
    cin >> number;

    int count = 0;

    while (number > 0) {
      count += (number % 2);
      number /= 2;
    }

    int answer = 0;

    for (int i = 0; i < count; i++) {
      answer += pow(2, i);
    }

    cout << answer << endl;
  }

}
