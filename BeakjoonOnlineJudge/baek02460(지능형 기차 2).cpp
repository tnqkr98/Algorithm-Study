#include <iostream>
using namespace std;
int main() {
	int sum=0, max = 0;
	for (int i = 0; i < 10; i++) {
		int a, b;
		cin >> a >> b;
		sum += b - a;
		if (sum > max) max = sum;
	}
	cout << max;


	return 0;
}