#include <iostream>
using namespace std;
int m[17][17],cnt=0,n;
bool t3check(int r,int c) {
	if (r + 1 < n && c + 1 < n
		&& !m[r + 1][c + 1]
		&& !m[r + 1][c]
		&& !m[r][c + 1]) return 1;
	else return 0;
}
void back(int type, int r1, int c1, int r2,int c2) {
	if (r2 == n - 1 && c2 == n - 1) cnt++;
	if (type == 1 && c2 + 1 < n && !m[r2][c2 + 1]) 
		back(1, r2, c2, r2, c2 + 1);
	else if (type == 2 && r2 + 1 < n && !m[r2 + 1][c2]) 
		back(2, r2, c2, r2 + 1, c2);
	else if(type== 3){
		if (c2 + 1 < n && !m[r2][c2 + 1])
			back(1, r2, c2, r2, c2 + 1);
		if (r2 + 1 < n && !m[r2 + 1][c2])
			back(2, r2, c2, r2 + 1, c2);
	}
	if (t3check(r2, c2)) back(3, r2, c2, r2 + 1, c2 + 1);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
	back(1, 0, 0, 0, 1);
	cout << cnt;
	return 0;
}