#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int bin[3][4];
	int one = 0;
	int zero = 0;
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> bin[i][j];
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			if (bin[i][j] == 1)one+=1;
			else if (bin[i][j] == 0) zero += 1;
		}
		if (one == 3 and zero == 1) cout << "A" << "\n";
		else if (one == 2 and zero == 2) cout << "B" << "\n";
		else if (one == 1 and zero == 3) cout << "C" << "\n"; 
		else if (one == 4 and zero == 0) cout << "E" << "\n";
		else if(one == 0 and zero == 4) cout << "D" << "\n";
		zero = 0;
		one = 0;
	}
}