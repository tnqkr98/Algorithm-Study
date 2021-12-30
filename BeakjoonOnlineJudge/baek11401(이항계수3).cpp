#include <iostream>
using namespace std;
long long MOD = 1000000007LL;
long long modpow(long long n,long long r) {
	long long ans = 1;
	while (r > 0) {
		if (r % 2 == 1) {
			ans *= n;
			ans %= MOD;
		}
		n *= n;
		n %= MOD;
		r /= 2;
	}
	return ans;
}
long long inv(long long k, long long mod) {
	return modpow(k, mod - 2) % MOD;
}
long long fact(long long n) {
	long long r = 1;
	for (long long i = 1; i <= n; i++) {
		r *= i;
		r %= MOD;
	}
	return r;
}

int main() {
	long long n, k,inver,top,bot;
	cin >> n >> k;
	top = fact(n)%MOD;
	bot = ((fact(k) % MOD)*(fact(n-k) % MOD)) % MOD;
	inver = inv(bot, MOD)%MOD;
	cout << (top*inver)%MOD;
	return 0;
}