#include <bits/stdc++.h>
using namespace std;

int main(void) { //제일 먼저 들어온거 -> front , 나중에 들어온거 -> back  pop부분이 헷갈린다. 제일 먼저 들어온걸 삭제하는지 나중것을 삭제하는지 
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	queue<int>a;
	int N;
	cin >> N;

	while(N--){
		string s; // 명령문은 한번만 받는것이 아닌 n번 받는것이다 그러니 while문 안에 들어가서 string 초기화하고 입력받는게 맞는것이다!! 
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			a.push(x);
		}
		else if (s == "pop") {
			if (a.size() != 0) {  // 이 부분!!!! a가 아니라 s의 사이즈로 해서 틀림.. 
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