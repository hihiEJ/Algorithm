#include <bits/stdc++.h>
using namespace std;
// st.empty() 비어있으면 true, 채워져있으면 false
int main(void) {
	stack<int> st;
	int n;
	std::cin >> n;

	while (n--) {
		string s;
		std::cin >> s;
		if (s == "push") {
			int num ;
			std::cin >> num;
			st.push(num);
		}
		else if (s == "pop") {
			if (st.empty()) std::cout << "-1" << "\n";
			else {
				std::cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (s == "size") {
			std::cout << st.size() << "\n";
		}
		else if (s == "empty") {
			std::cout << st.empty() << "\n";
		}
		else if (s == "top") {
			if (st.empty()) std::cout << "-1" << "\n";
			else std::cout << st.top() << "\n";
		}
	}
}