#include <iostream>
using namespace std;
int arr[100][100] = { 0 }, c=0;
void start(int a, int b) {
	for (int i = a; i <= a + 9 && i< 100; i++) {
		for (int j = b; j <= b + 9 && j < 100; j++) {
			if (arr[i][j] == 0) c++;
			arr[i][j] = 1;
		}
	}
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		start(a, b);
	}
	cout << c;
	return 0;
}