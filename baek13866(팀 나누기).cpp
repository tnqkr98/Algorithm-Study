#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
	int a, b, c, d; cin >> a >> b >> c >> d;
	int arr[3] = {
		abs(a + b - c - d),
		abs(a + c - b - d),
		abs(a + d - b - c)
	};
	cout << *min_element(arr, arr + 3);


	return 0;
}