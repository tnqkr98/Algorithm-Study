#include <iostream>
#include <memory.h>
using namespace std;
int room[101][101],man[100],n,k;
void floyd() {
	for(int m=1;m<=n;m++)
		for(int s=1;s<=n;s++)
			for (int e = 1; e <= n; e++) 
				if (room[s][e] > room[s][m] + room[m][e]) {
					room[s][e] = room[s][m] + room[m][e];
					room[e][s] = room[s][m] + room[m][e];
				}
}
int findmin() {
	int min = 1e9,ret=0;
	for (int i = 1; i <= n; i++) {
		int sum=0;
		for (int m = 0; m < k; m++) 
			sum += room[man[m]][i];
		if (min > sum) {
			ret = i;
			min = sum;
		}
	}
	return ret;
}
int main() {
	int t; cin >> t;
	while (t--) {
		memset(man, 0, sizeof(man));
		int m; cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				if (i != j) room[i][j] = 1e9;
				else room[i][j] = 0;
			}

		for (int i = 0; i < m; i++) {
			int s, e, w; cin >> s >> e >> w;
			room[s][e] = w;
			room[e][s] = w;
		}
		cin >> k;
		for (int i = 0; i < k; i++) 
			cin >> man[i];

		floyd();
		cout << findmin() <<endl;
	}
	return 0;
}