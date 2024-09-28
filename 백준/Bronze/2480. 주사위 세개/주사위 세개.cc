#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> num(3);
for (int i = 0; i < 3; i++) {
	cin >> num[i];
}

int same = 0;
int diff = 0;
int n = 0;

for (int i = 0; i < 3; i++) {
	for (int j = i + 1; j < 3; j++) {
		if (num[i] == num[j]) {
			n = num[i];
			same += 1;
		}
		else if(num[i] != num[j]){
			diff += 1;
		}
	}
}

int max = *max_element(num.begin(), num.end());

if (same == 3) {
	cout << 10000 + n * 1000 << "\n";
}
if (same == 1) {
	cout << 1000 + n * 100 << "\n";
}
if (diff == 3) {
	cout << max * 100 << "\n";
}
}