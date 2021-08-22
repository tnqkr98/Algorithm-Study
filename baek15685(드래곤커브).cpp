//#include <iostream>
//#include <stack>
//using namespace std;
//int map[101][101] = {0};
//int dir[4][2] = {{0,1},{-1,0},{0,-1},{1,0}};
//int main() {
//	int t; cin >> t;
//	for (int i = 0; i < t; i++) {
//		int a, b,d,g;
//		stack<int> d1, d2;
//		cin >> a >> b >> d >> g;
//		map[b][a] = 1;
//		a += dir[d][1]; b += dir[d][0];
//		map[b][a] = 1;
//		d1.push(d);
//		d2 = d1;
//		for (int j = 1; j <= g; j++) {
//			while (!d1.empty()) {
//				int nd = d1.top(); d1.pop();
//				if (nd + 1 > 3) nd = 0;
//				else nd++;
//				d2.push(nd);
//				a += dir[nd][1];
//				b += dir[nd][0];
//				map[b][a] = 1;
//			}
//			d1 = d2;
//		}
//	}
//	int cnt = 0;
//	for (int i = 0; i < 100; i++) 
//		for (int j = 0; j < 100; j++) 
//			if (map[i][j] && map[i][j + 1] && map[i + 1][j] && map[i + 1][j + 1])
//				cnt++;
//	cout << cnt;
//	return 0;
//}