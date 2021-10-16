#include <iostream>
#include <deque>
using namespace std;
struct can{int hp;bool r;};
int n, k;
deque<can> dq;
void rotate() {
	can t = dq[2 * n - 1];
	dq.pop_back();
	dq.push_front(t);
}
void move() {
	if (dq[n - 1].r) dq[n - 1].r = 0;
	for (int i = n-2; i >= 0; i--) 
		if (dq[i].r) 
			if (dq[i + 1].hp > 0 && !dq[i+1].r) {
				dq[i + 1].hp--;
				dq[i + 1].r = 1;
				dq[i].r = 0;
				if (i + 1 == n - 1) dq[i + 1].r = 0;
			}
}
int cnt() {
	int c = 0;
	for (int i = 0; i < 2 * n; i++)
		if (dq[i].hp == 0)c++;
	return c;
}
int main() {
	cin >> n >> k;
	dq = deque<can>(2*n);
	for (int i = 0; i < 2*n; i++) {
		int d; cin >> d;
		dq[i].hp = d;
	}
	int t = 1;
	while (1) {
		rotate();
		move();
		if (dq[0].hp > 0) {
			dq[0].hp--;
			dq[0].r = 1;
		}
		if (cnt() >= k)break;
		t++;
	}
	cout << t;
	return 0;
}