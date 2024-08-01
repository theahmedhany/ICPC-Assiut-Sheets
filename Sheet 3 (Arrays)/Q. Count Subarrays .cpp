#include<bits/stdc++.h>

using namespace std;

int main() {

  int counter;
  cin >> counter;

  int result = 0;

  while (counter--){
    int size;
    cin >> size;

    int arry[size];

    for (int i = 0; i < size; i++){
      cin >> arry[i];
    }
    
    result = size;
    int i = 0;
    int z = 0;

    while (true){
      if (z == size - 1){
        break;
      }
      
      if (arry[i] > arry[i + 1]){
        z++;
        i = z;
        continue;
      }
      

      result++;
      i++;

      if (size - 1 == i){
        z++;
        i = z;
      }
    }

    cout << result << endl;

  }

}