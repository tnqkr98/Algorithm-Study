#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <iostream>
using namespace std;
bool isPrime(long long n) {
	if (n <= 1) return 0;
	if (n % 2 == 0) return n == 2 ? 1 : 0;
	for (int i = 3; i <= sqrt(n); i += 2)
		if (n%i == 0) return 0;
	return 1;
}
int solution(int n, int k) {
	int answer = -1, cnt = 0;
	stack<int> num;
	while (n >= k) {
		num.push(n%k);
		n /= k;
	}
	num.push(n);
	string ns = "";
	while (!num.empty()) {
		if (num.top() == 0) {
			if (ns.size() != 0 && isPrime(stol(ns))) cnt++;
			ns = "";
		}
		else {
			ns += to_string(num.top());
		}
		num.pop();
	}
	if (ns.size() != 0 && isPrime(stol(ns))) cnt++;
	return cnt;
}