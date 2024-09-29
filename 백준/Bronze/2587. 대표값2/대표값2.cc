#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int s = 0;
	vector<int> num;

	for (int i = 0; i < 5; i++) {
		cin >> s;
		num.push_back(s);
	}
	int avg = 0;
	for (int i = 0; i < 5; i++) {
		avg += num[i];
	}
	avg = avg / 5;
	sort(num.begin(), num.end());
	cout << avg << "\n" << num[2];
}