#include <bits/stdc++.h>

using namespace std;

int Knapsack(int items_weight, int weight[], int value[], int items) {

  if (items_weight == 0 || items == 0) {
    return 0;
  }

  if (weight[items - 1] > items_weight) {
    return Knapsack(items_weight, weight, value, items - 1);
  } else {
    return max(
      value[items - 1] + Knapsack(items_weight - weight[items - 1], weight, value, items - 1),
      Knapsack(items_weight, weight, value, items - 1)
    );
  }

}

int main() {

  int items, items_weight;
  cin >> items >> items_weight;

  int weight[items];
  int value[items];

  for (int i = 0; i < items; i++) {
    cin >> weight[i] >> value[i];
  }

  cout << Knapsack(items_weight, weight, value, items) << endl;

}
