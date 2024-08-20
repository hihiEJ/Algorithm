#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (true) {
		string s;
		getline(cin, s);
		stack<char> sto;
		bool isval = true;
		if (s == ".") break;
		for (char c : s) {
			if (c == '(' || c == '[') {
				sto.push(c);
			}
			else if (c == ')') {
				if (sto.empty() || sto.top() != '(') {
					isval = false;
					break;
				}
				sto.pop();
			}
			else if (c == ']') {
				if (sto.empty() || sto.top() != '[') {
					isval = false;
					break;
				}
				sto.pop();
			}
		}
		if (!sto.empty()) isval = false;
		if (isval) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}

}