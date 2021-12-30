#include <iostream>
#include <deque>
using namespace std;
struct nd {int num, del;};
deque<nd> dq[51];
// 회전 -> 제거할 것 표시 -> 제거(0)
int n, m;
void rot(int num, int k) {
	for (int i = 0; i < k; i++) {
		dq[num].push_front(dq[num][m - 1]);
		dq[num].pop_back();
	}
}
double cal(bool mean) {
	double res=0,cnt=0;
	for (int i = 1; i <= n; i++)
		for (int j = 0; j < m; j++) {
			res += dq[i][j].num;
			if (!dq[i][j].del) cnt++;
		}
	if (mean) return res/cnt;
	else return res;
}
int main() {
	int t; cin >> n >> m >> t;
	for (int i = 1; i <= n; i++) 
		for (int j = 0; j < m; j++) {
			int num; cin >> num;
			dq[i].push_back({ num,0 });
		}
	while (t--) {
		int mul, d, k; cin >> mul >> d >> k;
		k %= m;
		for (int i = 1; i <= n; i++) 
			if (i%mul == 0 && k!=0) {
				if (d == 0) rot(i, k);
				else if (d == 1) rot(i, m-k);
			}
		// 제거 표시
		bool isdel = false;
		for (int i = 1; i <= n; i++) {
			for (int j = 0; j < m-1; j++) {
				if (dq[i][j].num && dq[i][j].num == dq[i][j + 1].num) {
					dq[i][j].del = 1;
					dq[i][j+1].del = 1;
					isdel = 1;
				}
			}
			if (dq[i][m - 1].num && dq[i][m-1].num == dq[i][0].num) {
				dq[i][m-1].del = 1;
				dq[i][0].del = 1;
				isdel = 1;
			}
		}
		for (int i = 1; i < n; i++) 
			for (int j = 0; j < m; j++) {
				if (dq[i][j].num && dq[i][j].num == dq[i + 1][j].num) {
					dq[i][j].del = 1;
					dq[i+1][j].del = 1;
					isdel = 1;
				}
			}
		// 제거
		if (isdel) { // 제거
			for (int i = 1; i <= n; i++)
				for (int j = 0; j < m; j++)
					if (dq[i][j].del) dq[i][j].num = 0;
		}
		else { //평균맞추기
			double mean = cal(1);
			for (int i = 1; i <= n; i++) 
				for(int j=0;j<m;j++)
					if (dq[i][j].num) {
						if (dq[i][j].num > mean)
							dq[i][j].num--;
						else if (dq[i][j].num < mean)
							dq[i][j].num++;
					}
		}		
	}
	cout << (int)cal(0);
	return 0;
}