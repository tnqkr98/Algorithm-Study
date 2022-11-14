#include <iostream>
using namespace std;
int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		long long kda[101][3];
		for(int i=0;i<n;i++)
			cin >> kda[i][0] >> kda[i][1] >> kda[i][2];
		long long k,d,a; cin >> k >> d >> a;
		long long sum = 0;
		for (int i = 0; i < n; i++)
		{
			long long s = kda[i][0] * k - kda[i][1] * d + kda[i][2] * a;
			if (s > 0) sum += s;
		}
		cout << sum << endl;
	}
	return 0;
}

