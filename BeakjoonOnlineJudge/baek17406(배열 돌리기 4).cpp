#include <iostream>
#include <memory.h>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;
int arr[51][51],oarr[51][51];
int d[4][2] = { { 0,1 },{ 1,0 },{ 0,-1 },{ -1,0 } }, n, m,k;
vector<tuple<int, int, int>> v;
vector<int> p;
int main() {
	int min = 1e9;
	cin >> n >> m >> k;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++) cin >> arr[i][j];

	for(int i=0;i<k;i++){
		int r, c, s; cin >> r >> c >> s;
		v.push_back(make_tuple(r, c, s));
		p.push_back(i);
	}

	memcpy(oarr, arr, sizeof(arr));

	do{
		memcpy(arr, oarr, sizeof(arr));
		for (int kk = 0; kk < k; kk++) {
			int r, c, s;
			tie(r, c, s) = v[p[kk]];
			for (int ss = s; ss > 0; ss--) {
				int sr = r - ss, sc = c - ss;
				int t = arr[sr][sc];
				for (int i = 0; i < 4; i++) {
					for (int j = 0; j < ss * 2; j++) {
						sr += d[i][0];
						sc += d[i][1];
						int nt = arr[sr][sc];
						arr[sr][sc] = t;
						t = nt;
					}
				}
			}
		}

		for (int i = 1; i <= n; i++) {
			int sum = 0;
			for (int j = 1; j <= m; j++)
				sum += arr[i][j];
			if (sum < min) min = sum;
		}
	} while (next_permutation(p.begin(), p.end()));

	cout << min;
	return 0;
}