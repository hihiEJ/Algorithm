#include <bits/stdc++.h>
using namespace std;

int n, k;
int sec[100002];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> k;
	fill(sec, sec + 100001, -1);
	sec[n] = 0;
	queue<int> q;
	q.push(n);

	while (sec[k] == -1) {// (실수1) 바보야... -1로 초기화된순간까지하고 -1 에서 숫자로 바뀐순간 while문을 빠져나와야지 미친놈아
		auto cur = q.front(); q.pop();
		for (int nxt : {cur + 1, cur - 1, cur * 2}) {
			if (nxt < 0 || nxt >100000) continue;
			if (sec[nxt] >= 0) continue;
			sec[nxt] = sec[cur] + 1;
			q.push(nxt);
		}
	}
	cout << sec[k];
}