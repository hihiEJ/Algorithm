#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> dq;
	int n;
	cin >> n;

	while (n--) {
		string cmd;
		cin >> cmd;
		if(cmd == "push_front") {
			int num_f;
			cin >> num_f;
			dq.push_front(num_f);
		}
		else if(cmd == "push_back") {
			int num_b;
			cin >> num_b;
			dq.push_back(num_b);
		}
		else if (cmd == "pop_front") {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << dq.size() << "\n";
		}
		else if (cmd == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (cmd == "front") {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.front() << "\n";
			}
		}
		else if (cmd == "back") {
			if (dq.empty()) {
				cout << "-1" << "\n";
			}
			else {
				cout << dq.back() << "\n";
			}
		}
	}
}