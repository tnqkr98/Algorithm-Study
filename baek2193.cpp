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