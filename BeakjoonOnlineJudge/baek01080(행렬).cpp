#include <iostream>
#include <string>
using namespace std;
int mat1[51][51], mat2[51][51],n,m;
void trans(int r, int c) {
	for (int i = r; i < r + 3; i++) 
		for (int j = c; j < c + 3; j++) 
			mat1[i][j] = (mat1[i][j] + 1) % 2;
}
int main() {
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n * 2; i++) {
		string t; cin >> t;
		for (int j = 0; j < m; j++) {
			if (i < n)
				mat1[i][j] = t[j]-'0';
			else
				mat2[i-n][j] = t[j]-'0';
		}
	}

	for (int i = 0; i < n-2; i++) 
		for (int j = 0; j < m-2; j++)
			if (mat1[i][j] != mat2[i][j]) {
				trans(i, j);
				cnt++;
			}
	
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < m; j++) 
			if (mat1[i][j] != mat2[i][j]){
				cnt = -1;
				break;
			}
	cout << cnt;
	return 0;
}