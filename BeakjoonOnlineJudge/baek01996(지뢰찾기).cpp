#include <iostream>
using namespace std;
char mp[1001][1001];
int n,d[8][2] = { {1,0},{0,1},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1} };
bool range(int r, int c) {
	return r >= 0 && c >= 0 && r < n&&c < n;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> mp[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mp[i][j] >= '1' && mp[i][j] <= '9') cout << '*';
			else {
				int sum = 0;
				for (int k = 0; k < 8; k++) {
					int nr, nc;
					nr = i + d[k][0];
					nc = j + d[k][1];
					if (range(nr, nc) && mp[nr][nc] >= '1' && mp[nr][nc] <= '9')
						sum += mp[nr][nc] - '0';
				}
				if(sum <10) cout << (char)(sum + '0');
				else cout << 'M';
			}
		}
		cout << endl;
	}
	return 0;
}