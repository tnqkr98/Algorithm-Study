#include <iostream>
#include <cmath>
using namespace std;
int m[21][21],n,mmin = 1e9;
bool team[21];
int caldiff() {
	int a = 0, b = 0;
	for(int i=0;i<n;i++)
		for (int j = i+1; j < n; j++) {
			if (team[i] && team[j])
				a += m[i][j] + m[j][i];
			else if (!team[i] && !team[j])
				b += m[i][j] + m[j][i];
		}
	return abs(a - b);
}
void back(int parent) {
	for (int i = 0; i < n; i++) {
		if (i > parent) {
			team[i] = 1;
			int diff = caldiff();
			if (diff < mmin) mmin = diff;
			back(i);
			team[i] = 0;
		}
	}
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
	back(-1);
	cout << mmin;
	return 0;
}