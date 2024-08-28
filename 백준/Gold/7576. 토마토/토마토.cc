#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int board[1002][1002];
int day[1002][1002];
int n,m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> m>> n; //가로, 세로  -> 이거 n,m이렇게 받아서 런타임에러 생김 가로 세로 잘 볼 것 !! 그리고 한번 더 천천히 읽으면서 이해할 것 
	queue<pair<int, int>> q;
	for (int i = 0; i < n; i++) { //세로
		for (int j = 0; j < m; j++) {//가로 
			cin >> board[i][j];
			if (board[i][j] == 1) q.push({ i,j });// 익은 토마토는 큐에 넣자
			if (board[i][j] == 0) day[i][j] = -1;// 빈칸, 익은 토마토 = 0 , 익지 않은 토마토 = -1;
		}
	}
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
			//if (board[nx][ny] == -1 || day[nx][ny] == 0) continue; // 안되는 이유 board [nx][ny]==0,1인경우가 통과하게 됨 암튼 안됨 
			if (day[nx][ny] >= 0)continue; //이렇게 되면 익은토마토, 빈칸 = 0 -> 제외 , 익은 토마토로 인해 익은 익지 않은 토마토 (0보다 큰 숫자들)을 제외 
			day[nx][ny] = day[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}
	int ans = 0; 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (day[i][j] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, day[i][j]);
		}
	}
	cout << ans ;
}