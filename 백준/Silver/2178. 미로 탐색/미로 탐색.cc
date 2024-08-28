#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102]; //1101 ->0110 -> 이 순서대로임을 명심하자!! 
int dist[502][502];
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m; 
	for (int i = 0; i < n; i++)
		cin >> board[i];
	for (int i = 0; i < n; i++) {
		fill(dist[i], dist[i] + m, -1);
	}
	queue<pair<int, int>> q;
	q.push({ 0,0 });
	dist[0][0] = 0;
	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx >= n || nx < 0 || ny >= m || ny < 0) continue;
			if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;  
			dist[nx][ny] = dist[cur.X][cur.Y] + 1;
			q.push({ nx,ny });
		}
	}
	cout << dist[n - 1][m - 1] + 1; 

}