#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n, m,i;
	long long t,sum=0,diff,next;
	vector<long long> v;
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), greater<int>());
	for (i = 0; i < n; i++) {
		if (i != n - 1)
			next = v[i + 1];
		else
			next = 0;
		diff = v[i]-next;
		if (diff == 0) continue;
		if (m - diff*(i+1) > 0) {
			sum += diff;
			m -= diff*(i+1);
		}
		else if(m-diff*(i+1) ==0) {
			sum += diff;
			cout << v[0] - sum;
			break;
		}
		else {
			for (int j = v[i]; j > next; j--) {
				m -= (i + 1);
				sum++;
				if (m <= 0) break;
			}
			cout << v[0] - sum;
			break;
		}
	}	
	return 0;
}