#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
bool check[4000001];
void era() {
	for (int i = 2; i < 4000001; i++) {
		if (!check[i]) {
			v.push_back(i);
			for (int j = i; j < 4000001; j += i) check[j] = 1;
		}
		else continue;
	}
}
int main() {
	int n,c=0; cin >> n;
	if (n == 2) {
		cout << 1;
		return 0;
	}
	era();
	int k = v.size()-1;
	int s=0, e=1,sum=v[s]+v[e];
	while (e <= k) {
		if (sum >= n) {
			if (sum == n) c++;
			if (s < e) {
				s++;
				sum -= v[s - 1];
			}
			else {
				e++;
				if (e > k) break;
				sum += v[e];
			}
		}
		else {
			e++;
			if (e > k) break;
			sum += v[e];
		}
	}
	cout << c;
	return 0;
}