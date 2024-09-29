#include <bits/stdc++.h>
using namespace std;

int main(void) {
	vector<int> dwarf_candi;
	int n = 0;
	int sum = 0;
	int f1 = 0;
	int f2 = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n;
		dwarf_candi.push_back(n);
		sum += n;
	 }

	sort(dwarf_candi.begin(), dwarf_candi.end());
	int din = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			din = dwarf_candi[i] + dwarf_candi[j];
			if (sum - din == 100) {
				f1 = i; 
				f2 = j;
			}
			else {
				continue;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		if (i != f1 && i != f2) {
			cout << dwarf_candi[i]<< "\n";
		}
	}
}