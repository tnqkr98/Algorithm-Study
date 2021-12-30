#include <cstdio>
#include <vector>
#pragma warning(disable:4996)
#define DV 1000
#define vll vector<vector<long long>>
using namespace std;
vll mat;
int n;
vll matmul(vll a, vll b) {
	vll res(n, vector<long long>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			res[i][j] = 0;
			for (int k = 0; k < n; k++) 
				res[i][j] += (a[i][k] * b[k][j]);
			res[i][j] %= DV;
		}
	}
	return res;
}
vll mult(long long b) {
	if (b == 1) return mat;
	if (b % 2 == 0) {
		vll haf = mult(b / 2);
		return matmul(haf, haf);
	}
	else
		return matmul(mult(b-1), mat);
}
int main() {
	long long b; scanf("%d %lld", &n, &b);
	for (int i = 0; i < n; i++) {
		mat.push_back(vector<long long>());
		for (int j = 0; j < n; j++) {
			int t; scanf("%d", &t);
			mat[i].push_back(t);
		}
	}
	vll res = mult(b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			printf("%lld ", res[i][j]);
		printf("\n");
	}
	return 0;
}