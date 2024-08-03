#include<bits/stdc++.h>

using namespace std;

int cases;
int arry[1000];

void evenIndices(int index){

  if(index >= cases){
		return;
	}

	evenIndices(index + 2);

	cout << arry[index] << " ";

}

int main() {

	cin >> cases;

	for(int i = 0; i < cases; i++){
		cin >> arry[i];
	}

	evenIndices(0);

}
