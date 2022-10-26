#include <iostream>
using namespace std;
int main() {
	int n, c; cin >> n >> c;
	int arr[31],s=0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		s += arr[i];
	}
	c /= s;
	for (int i = 0; i < n; i++) 
		cout << arr[i] * c << endl;
	return 0;
}