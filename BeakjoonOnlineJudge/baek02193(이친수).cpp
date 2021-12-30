// https://www.acmicpc.net/problem/2193
// 백준 2193번 : 이친수(Pinary number)
// Algorithm : Dynamic programming

#include <iostream>
using namespace std;
int main() {
	int n, i;
	unsigned long long arr[91];
	cin >> n;
	arr[1] = 1;
	arr[2] = 1;
	for (i = 3; i <= n; i++) 
		arr[i] = arr[i - 1] + arr[i - 2];
	cout << arr[n];
	return 0;
}