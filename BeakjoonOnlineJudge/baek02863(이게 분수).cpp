#include <iostream>
#include <memory.h>
using namespace std;
int main() {
	double m[2][2], m2[2][2];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)cin >> m[i][j];
	int maxi = 0;
	double max = m[0][0] / m[1][0] + m[0][1] / m[1][1];
	for (int i = 1; i < 4; i++) {
		m2[0][1] = m[0][0];
		m2[1][1] = m[0][1];
		m2[1][0] = m[1][1];
		m2[0][0] = m[1][0];
		if (max < m2[0][0] / m2[1][0] + m2[0][1] / m2[1][1]) {
			max = m2[0][0] / m2[1][0] + m2[0][1] / m2[1][1];
			maxi = i;
		}
		memcpy(m, m2, sizeof(m));
	}
	cout << maxi;
	return 0;
}