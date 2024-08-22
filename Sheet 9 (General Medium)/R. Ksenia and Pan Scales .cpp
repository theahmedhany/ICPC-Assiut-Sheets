#include <bits/stdc++.h>

using namespace std;

int main(){

  string txt, add;
	string left, right;

  cin >> txt;

  int position = txt.find('|');

  left = txt.substr(0, position);
  right = txt.substr(position + 1);

  cin >> add;

  for (auto pointer : add)
    if (left.size() <= right.size())
			left += pointer;
    else
			right += pointer;

	if (left.size() == right.size()){
		cout << left << "|" << right << endl;
	} else {
		cout << "Impossible" << endl;
	}

}