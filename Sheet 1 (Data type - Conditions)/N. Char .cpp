#include<bits/stdc++.h>

using namespace std;

int main(){

	char txt;
	cin >> txt;

	int txt_ascii = txt;

	if (txt_ascii >= 65 && txt_ascii < 90){

		int final_ascii = txt_ascii + 32;
		char result_txt = final_ascii;
		cout << result_txt;

	}else if (txt_ascii >= 97 && txt_ascii < 122){

		int final_ascii = txt_ascii - 32;
		char result_txt = final_ascii;
		cout << result_txt;

	}else if (txt_ascii == 122){

		cout << "Z";

	}else if (txt_ascii == 90){

		cout << "A";

	}

}

