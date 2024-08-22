#include <bits/stdc++.h>

using namespace std;

int main() {

	string txt_1, txt_2;
	cin >> txt_1 >> txt_2;

	if (txt_1 == txt_2){
		cout << "-1" << endl;
	} else if (txt_1.size() > txt_2.size()) {
		cout << txt_1.size() << endl;
	} else {
		cout << txt_2.size() << endl;
	}
	
	

}
