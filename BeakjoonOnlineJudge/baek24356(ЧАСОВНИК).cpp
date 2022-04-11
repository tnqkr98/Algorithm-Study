#include <iostream>
using namespace std;
int main() {
	int t1, m1, t2, m2;
	cin >> t1 >> m1 >> t2 >> m2;
	int time1 = t1 * 60 + m1, time2 = t2 * 60 + m2;
	if (time1 > time2) cout << (1440 - time1) + time2 << " " << ((1440 - time1) + time2) / 30;
	else cout << time2 - time1 << " " << (time2 - time1) / 30;
	return 0;
}