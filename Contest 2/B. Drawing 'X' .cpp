#include<bits/stdc++.h>

using namespace std;

int main(){

  int counter;
  cin >> counter;

  for (int i = 0; i < counter; i++){
    for (int ii = 0; ii < counter; ii++){
      if (i == ii && i != counter / 2 && ii != counter / 2) {
        cout << "\\";
      } else if (i == counter / 2 && ii == counter / 2) {
        cout << "X";
      } else if (ii != counter / 2 && i == ((counter - 1) - ii)) {
        cout << "/";
      } else {
        cout << "*";
      }
    }
		
    cout << endl;
  }

}
