#include <bits/stdc++.h>
int alpha[26];
int main() {
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    
    std::string word;
	std::cin >> word;
	for (auto c : word) {
		alpha[c - 'a']++;
	}
    
    for (int i = 0; i < 26; i++) {
		std::cout << alpha[i] << " ";
	}
}