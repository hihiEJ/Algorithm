#include <bits/stdc++.h>
using namespace std;

int main(void) { //제일 먼저 들어온거 -> front , 나중에 들어온거 -> back 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	queue<int>a;
	int N;
	cin >> N;

	while(N--){
		string s;
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			a.push(x);
		}
		else if (s == "pop") {
			if (a.size() != 0) {
				cout << a.front()<< "\n";
				a.pop();
			}
			else {
				cout << "-1" << "\n";
			}
		}
		else if (s == "size") {
			cout << a.size() << "\n";
		}
		else if (s == "empty") {
			cout << a.empty() << "\n";
		}
		else if (s == "front") {
			if (a.size() != 0) cout << a.front() << "\n";
			else cout << "-1" << "\n";
		}
		else if (s == "back") {
			if (a.size() != 0) cout << a.back() << "\n";
			else cout << "-1" << "\n";

		}

	}
	
}