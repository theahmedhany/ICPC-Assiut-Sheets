#include<bits/stdc++.h>

using namespace std;

int main() {

  string base_colors = "ROYGBIV";
  string additional_colors[] = {"G", "GB", "GBI", "GBIV"};

  int size;
  cin >> size;

  int added_size = size - 7;

  while (added_size > 0) {
    int segment = min(added_size, 4);
    base_colors += additional_colors[segment - 1];
    added_size -= segment;
  }

  cout << base_colors << endl;

}
