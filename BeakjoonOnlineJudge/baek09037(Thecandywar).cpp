#include <iostream>
#include <memory.h>
using namespace std;
bool isSame(int c[],int n) {
	for (int i = 1; i < n; i++) 
		if (c[i] != c[i - 1]) return 0;
	return 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int n,cnt=0; cin >> n;
		int c[31] = { 0 };
		for (int i = 0; i < n; i++) 
			cin >> c[i];
		for (int i = 0; i < n; i++)
			if (c[i] % 2 == 1) c[i] += 1;
		while (!isSame(c,n)) {
			int nc[31] = { 0 };
			nc[0] = c[0] - c[0] / 2 + c[n - 1] / 2;
			for (int i = 1; i < n; i++) 
				nc[i] = c[i] - c[i] / 2 + c[i - 1] / 2;
			for (int i = 0; i < n; i++)
				if (nc[i] % 2 == 1) nc[i] += 1;
			memcpy(c, nc, sizeof(c));
			cnt++;
		}
		cout <<cnt<<endl;
	}
	return 0;
}