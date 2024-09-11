#include<bits/stdc++.h>

using namespace std;

int main() {

  int size;
  cin >> size;

  int arry_1[size];
  int arry_2[size];

  for (int i = 0; i < size; i++) {
    int value;
    cin >> value;

    arry_1[i] = value;
    arry_2[i] = value;
  }
  
  int counter_1 = 0, counter_2 = 1;
  int template_1 = 0, template_2 = 0;

  arry_2[0] *= -1;

  for (int i = 0; i < size; i++) {
    if (i == 0) {
      template_1 = arry_1[i];
      template_2 = arry_2[i];
    } else {
      if ((template_1 > 0 && arry_1[i] > 0) || (template_1 < 0 && arry_1[i] < 0)) {
        arry_1[i] *= -1;
        counter_1++;
      }
      if ((template_2 > 0 && arry_2[i] > 0) || (template_2 < 0 && arry_2[i] < 0)) {
        arry_2[i] *= -1;
        counter_2++;
      }

      template_1 = arry_1[i];
      template_2 = arry_2[i];
    }
  }
  
  if (counter_1 < counter_2) {
    cout << counter_1 << endl;
  } else {
    cout << counter_2 << endl;
  }

}

