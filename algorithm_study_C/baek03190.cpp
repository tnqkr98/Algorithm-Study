//// https://www.acmicpc.net/problem/3190
//// 백준 3190 번 : 뱀
//// 관련 알고리즘 : Simulation
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//int main() {
//	int n, k,i,j,a,b,l,t=0,m_idx=0,dir=0,x=0,y=0,rx,ry;
//	short map[100][100] = { 0 };
//	char c;
//	queue<pair<int, int>> q;
//	vector<pair<int,char>> m;
//	cin >> n >> k;
//	for (i = 0; i < k; i++) {
//		cin >> a >> b;
//		map[a - 1][b - 1] = 1;
//	}
//	cin >> l;
//	for (i = 0; i < l; i++) {
//		cin >> a >> c;
//		m.push_back(make_pair(a, c));
//	}
//	map[x][y] = 2;
//	q.push(make_pair(x, y));
//	while (1) {
//		t++;
//		switch (dir) {
//		case 0:
//			y += 1;
//			break;
//		case 1:
//			x += 1;
//			break;
//		case 2:
//			y -= 1;
//			break;
//		case 3:
//			x -= 1;
//			break;
//		}
//		if (x >= n || y >= n || x < 0 || y < 0 || map[x][y] == 2)
//			break;
//
//		if (!map[x][y]){
//			rx = q.front().first;
//			ry = q.front().second;
//			map[rx][ry] = 0;
//			q.pop();
//		}
//		if (m_idx < m.size() && t == m[m_idx].first) {
//			if (m[m_idx].second == 'D') {
//				dir += 1;
//				dir %= 4;
//			}
//			else {
//				dir -= 1;
//				if (dir < 0)
//					dir = 3;
//				dir %= 4;
//			}
//			m_idx++;
//		}
//		map[x][y] = 2;
//		q.push(make_pair(x, y));
//		
//	}
//	cout << t;
//	return 0;
//}