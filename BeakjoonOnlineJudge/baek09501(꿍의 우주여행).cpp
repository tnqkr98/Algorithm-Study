#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n, d,cnt=0; cin >> n >> d;
		for (int i = 0; i < n; i++) {
			double v, f, c;
			cin >> v >> f >> c;
			double s = v / c; // ����1�� ���°Ÿ�
			if (s*f >= d) cnt++;
		}
		cout << cnt<<endl;
	}
	return 0;
}