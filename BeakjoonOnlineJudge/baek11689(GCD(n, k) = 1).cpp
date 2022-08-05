#include <iostream>
#include <vector>
using namespace std;
int main() {
	long long n,res;
	cin >> n;
	res = n;
	vector<long long> v;
	for (long long i = 2; i * i <= n; i++) {
		bool flag = 1;
		while (n % i == 0) {
			if (flag) {
				res = res / i *(i - 1);
				flag = false;
			}
			n /= i;
		}
	}
	if (n != 1) {
		res = res / n * (n - 1);
	}
	cout <<res;
	return 0;
}