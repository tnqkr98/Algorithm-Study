#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
char arr[51][51];
int n, mmax = 0, d[4][2] = { {0,1},{1,0},{0,-1},{-1,0} };
void findmax() {
	for (int i = 0; i < n; i++) {
		char fir1 = arr[i][0],fir2=arr[0][i];
		int cnt1 = 1,cnt2=1;
		for (int j = 1; j < n; j++) {
			if (arr[i][j] == fir1) {
				cnt1++;
				mmax = max(cnt1, mmax);
			}
			else {
				cnt1 = 1;
				fir1 = arr[i][j];
			}
			if (arr[j][i] == fir2) {
				cnt2++;
				mmax = max(cnt2, mmax);
			}
			else {
				cnt2 = 1;
				fir2 = arr[j][i];
			}
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		for (int j = 0; j < n; j++) arr[i][j] = s[j];
	}
	findmax();
	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) 
			for (int k = 0; k < 4; k++) {
				int nr, nc;
				nr = i + d[k][0];
				nc = j + d[k][1];
				if (nr >= 0 && nc >= 0 && nr < n&&nc < n && (arr[i][j] != arr[nr][nc])) {
					char tmp = arr[i][j];
					arr[i][j] = arr[nr][nc];
					arr[nr][nc] = tmp;
					findmax();
					arr[nr][nc] = arr[i][j];
					arr[i][j] = tmp;
				}
			}
	cout << mmax;
	return 0;
}