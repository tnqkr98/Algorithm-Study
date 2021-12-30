// https://www.acmicpc.net/problem/1309
// 백준 1309번 : 동물원
// 관련 알고리즘 : Dynamic Programming

#include <iostream>
using namespace std;
int main() {
	int n,d1=1,d2=0,nd1,nd2;
	cin >> n;
	for (int i = 1; i < n; i++) {
		nd1 = d1 + d2;
		nd2 = d1 * 2 + d2;
		d1 = nd1 % 9901;
		d2 = nd2 % 9901;
	}
	cout << (d1*3+ d2*2)%9901;
	return 0;
}