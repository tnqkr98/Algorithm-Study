#include <iostream>
#include <climits>
using namespace std;
int main() {
	for (int i = 0; i < 3; i++) {
		int n; cin >> n;
		long long sum = 0;
		int over = 0;
		for (int j = 0; j < n; j++) {
			long long t; cin >> t;
			if (t > 0 && sum > 0 && sum > LLONG_MAX - t) over++;
			if (t < 0 && sum < 0 && sum < LLONG_MIN - t) over--;
			sum += t;
			
		}
		if (sum == 0) cout << 0 << endl;
		else if (over>0) cout << "+" << endl;
		else if (over<0) cout << "-" << endl;
		else {
			if(sum>0) cout << "+" << endl;
			else cout << "-" << endl;
		}
	}

	return 0;
}