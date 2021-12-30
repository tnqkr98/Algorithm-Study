// https://www.acmicpc.net/problem/1629
// 백준 1629번 : 곱셈
// 관련 알고리즘 : Divide & Conquer

#include <iostream>
using namespace std;
unsigned long long a,b,c;
unsigned long long dnq(unsigned long long n) {
	if (n == 1) return a%c;
	else if (n % 2 == 0)
		return ((dnq(n / 2)%c) * (dnq(n / 2)%c))%c;
	else
		return ((dnq(n / 2)%c)*(dnq(n / 2 + 1)%c))%c;
}

int main() {
	cin >> a >> b >> c;
	cout<<dnq(b);
	return 0;
}