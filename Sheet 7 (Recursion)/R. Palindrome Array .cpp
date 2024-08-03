#include<bits/stdc++.h>

using namespace std;

int arry[100000];
int arry_size;

bool palindromeArray(int index){

	if(index == arry_size){
		return 1;
	}

	return (arry[index] == arry[arry_size - index - 1]) && palindromeArray(index + 1);

}

int main(){

	cin >> arry_size;

	for(int i = 0; i < arry_size; i++){
		cin >> arry[i];
	}

	if(palindromeArray(0)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

}
