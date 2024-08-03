#include<bits/stdc++.h>

using namespace std;

int arry[1000];
int arry_size;

int getMaxNumber(int index){

	if(index == arry_size - 1){
		return arry[index];
	}

	return max(arry[index], getMaxNumber(index + 1));

}

int main(){

	cin >> arry_size;

	for(int i = 0; i < arry_size; i++){
		cin >> arry[i];
	}

	cout << getMaxNumber(0) << endl;

}
