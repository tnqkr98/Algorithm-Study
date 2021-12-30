#include <iostream>
using namespace std;
int d[100001]={0};
int main() {
	int n, k,c[101];
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		c[i] = t;
	}
	d[0] = 1;
	for (int i = 0; i < n; i++) 
		for (int j = 1; j <= k; j++) 
			if(c[i] <= j)
				d[j] = d[j] + d[j - c[i]];
	cout << d[k];
	return 0;
}