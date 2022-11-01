#include <iostream>
using namespace std;
int main() {
	int n, s,f=1; cin >> n >> s;
	int arr[101];
	for (int i = 0; i < n; i++) cin >> arr[i];
	while (f) {
		for (int j = 0; j < n; j++) {
			if (arr[j] >= s) s++;
			else {
				cout << j + 1;
				f = 0;
				break;
			}
		}
	
	return 0;
}