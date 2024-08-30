#include<bits/stdc++.h>

using namespace std;

int main() {

  long long size;
  cin >> size;

  vector<pair<long long, pair<long long, long long>>> dragon(size);

  for (int i = 0; i < size; i++) {
    long long number_1, number_2;
    cin >> number_1 >> number_2;

    dragon[i].first = (number_1 - number_2);
    dragon[i].second = {number_1, number_2};
  }

  sort(dragon.begin(), dragon.end());

  long long total = dragon[size - 1].second.first;
  long long answer = total - dragon[size - 1].second.second;

  for (int i = size - 2; i >= 0; i--) {
    if (answer < dragon[i].second.first) {
      total += dragon[i].second.first - answer;
      answer = dragon[i].second.first;
    }
    answer -= dragon[i].second.second;
  }

  cout << total;

}
