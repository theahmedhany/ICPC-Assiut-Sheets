#include<bits/stdc++.h>

using namespace std;

int main(){

	string codeLine;
	int print = 1;

	while(getline(cin, codeLine)){
		bool flag = 0;

		if(codeLine.size() == 0 || codeLine == " "){
			continue;
		}

		for(int i = 0; i < codeLine.length(); i++){
			if(codeLine[i] == '/' && codeLine[i + 1] == '/' && print){
				break;
			} else if (codeLine[i] == '/' && codeLine[i + 1] == '*') {
				i++;
				print = 0;
			} else if (codeLine[i] == '*' && codeLine[i + 1] == '/' && !print) {
				i++;
				print = 1;
			} else if (print == 1) {
				cout << codeLine[i];
				flag = 1;
			}
		}

		if(flag && print == 1){
			cout << endl;
		}
	}

}