#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int n, m;
string board[1002];
int hour1[1002][1002];// 불
int hour2[1002][1002]; // 지훈
int dx[4] = {1,0,-1,0};
int dy[4] = { 0,1,0,-1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;//r(행) -> c(열)

	for (int i = 0; i < n; i++) {//hour1, hour2 시간을 전체 -1시간으로 초기화
		fill(hour1[i], hour1[i]+ m, -1);
		fill(hour2[i], hour2[i] + m, -1);
	}
	
	for (int i = 0; i < n; i++) {
		cin >> board[i];
	}
	queue<pair<int, int>> q1;
	queue<pair<int, int>> q2;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'F') {
				q1.push({ i,j });
				hour1[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				q2.push({ i,j });
				hour2[i][j] = 0;
			}
		}
	}

	while (!q1.empty()) {//불
		auto cur = q1.front(); q1.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)continue;
			if (board[nx][ny] == '#' || hour1[nx][ny] >= 0)continue;
			hour1[nx][ny] = hour1[cur.X][cur.Y] + 1;
			q1.push({ nx,ny});
		}
	}
	while (!q2.empty()) {//지훈
		auto cur = q2.front(); q2.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				cout << hour2[cur.X][cur.Y]+1 << "\n";
				return 0;
			}
			if (board[nx][ny] == '#' || hour2[nx][ny] >= 0) continue;
			if ( hour1[nx][ny] != -1 && hour1[nx][ny]<=hour2[cur.X][cur.Y]+1) continue;

			hour2[nx][ny] = hour2[cur.X][cur.Y] + 1;
			q2.push({ nx,ny });
		}
	} 
	cout << "IMPOSSIBLE" << "\n";

}
