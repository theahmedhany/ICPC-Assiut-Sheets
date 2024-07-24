#include<bits/stdc++.h>

using namespace std;

int main(){

	char txt;
	cin >> txt;

	int txt_ascii = txt;
	
	if (txt_ascii >= 65 && txt_ascii <= 90){
		cout << "ALPHA\n";
		cout << "IS CAPITAL";
	}else if (txt_ascii >= 97 && txt_ascii <= 122){
		cout << "ALPHA\n";
		cout << "IS SMALL";
	}else{
		cout << "IS DIGIT";
	}

}
