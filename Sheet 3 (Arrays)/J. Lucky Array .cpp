#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  cin >> size;

  int arry[size];

  for (int i = 0; i < size; i++){
    cin >> arry[i];
  }

  int min_number = arry[0];
  int counter = 0;

  for (int i = 0; i < size; i++){
		if (arry[i] <= min_number){
      min_number = arry[i];
    }
  }

  for (int i = 0; i < size; i++){
    if (arry[i] == min_number){
      counter++;
    }
  }

  if (counter % 2 != 0){
    cout << "Lucky" << endl;
  } else {
    cout << "Unlucky" << endl;
  }

}