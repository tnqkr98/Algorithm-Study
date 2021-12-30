#include <iostream>
using namespace std;
int cur = 1,n;
int num[10000];
bool endflag;
void s(int k) {
	if (endflag) return;
	if (k == 0) {
		if (n >= cur && n < cur + 3) {
			if (n == cur) cout << "m";
			else cout << "o";
			endflag = 1;
		}
		cur += 3;
		return;
	}
	s(k - 1);
	if (endflag) return;
	if (n == cur) {
		cout << "m";
		endflag = 1;
		return;
	}
	else if (n > cur && n <= cur + 2 + k) {
		cout << "o";
		endflag = 1;
		return;
	}
	cur += 3 + k;
	s(k - 1);
	if (endflag) return;
}
int main() {
	cin >> n;
	num[0] = 3;
	for (int i = 0;; i++) {
		if (num[i] == n) {
			cout << "o";
			break;
		}
		else if (num[i] > n) {
			s(i);
			break;
		}
		num[i + 1] = 2*num[i]+i+4;
	}
	return 0;
}