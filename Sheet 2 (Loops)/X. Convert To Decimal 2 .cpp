#include<bits/stdc++.h>

using namespace std;

int main(){

  int size;
  cin >> size;

	int number;

  while (size--){
    cin >> number;

    int counter = 0;

    while (number > 0){
      counter += (number % 2);
      number /= 2;
    }

    int answer = 0;

    for (int i = 0; i < counter; i++){
      answer += pow(2 ,i);
    }

    cout << answer << endl;
  }

}
