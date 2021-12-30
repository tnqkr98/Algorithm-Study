#include <iostream>
#include <algorithm>
using namespace std;
int M[501][501],d[502];	// i번 행렬 ~ j번 행렬 까지 최소 곱셈 횟수
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		d[i] = a;
		d[i + 1] = b;
	}
	
	for (int len = 2; len <= n; len++) {
		for (int i = 1; i <= n -len+1; i++) {
			int j = i + len - 1;	// len 길이 만큼 결합했을때 최소를 찾자
			M[i][j] = 1e9;
			for (int k = i; k < j; k++) {
				int cost = M[i][k] + M[k+1][j] + d[i - 1] * d[k] * d[j];
				M[i][j] = min(cost, M[i][j]);
			}
		}
	}

	cout << M[1][n];
	return 0;
}