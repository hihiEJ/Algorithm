#include <bits/stdc++.h>

int semulti[10]; int main() {
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	std::vector<int> cnt(10, 0);
	int multi = a * b * c;
	std::string smulti = std::to_string(multi);
	for (char digit : smulti) {
		cnt[digit - '0']++;
	}
	for (int i = 0; i <= 9; i++) {
		std::cout << cnt[i] << "\n";
	}
}