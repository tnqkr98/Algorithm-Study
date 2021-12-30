#include <cstdio>
#pragma warning(disable:4996)
using namespace std;
int num[2001];
int d[2001][2001];	// 0: 모름, 1: 아님, 2: 회문
bool ispal(int s,int e) {
	for (int i = 0; i <= e-s; i++) 
		if (num[s + i] != num[e - i]) return false;
	return true;
}
void setpal(int s, int e) {
	for (int i = 0; i <= e - s; i++) {
		d[s + i][e - i] = 2;
		d[e - i][s + i] = 2;
	}
}
int main() {
	int n,m; scanf("%d", &n);
	for (int i = 1; i <= n; i++) 
		scanf("%d",&num[i]);
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int a, b;
		scanf("%d %d", &a,&b);
		if (d[a][b] == 0) {
			if (ispal(a, b)) {
				setpal(a, b);
				printf("1\n");
			}
			else {
				d[a][b] = 1;
				d[b][a] = 1;
				printf("0\n");
			}
		}
		else if (d[a][b] == 1)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}