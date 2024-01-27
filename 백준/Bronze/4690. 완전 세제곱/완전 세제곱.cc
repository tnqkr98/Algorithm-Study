#include <iostream>
using namespace std;
int main() {
	for (int a = 1; a <= 100; a++) {
		for (int i = 2; i <= 100; i++) {
			for (int j = i; j <= 100; j++) {
				for (int k = j; k <= 100; k++) {
					if (i * i * i + j * j * j + k * k * k == a * a * a) {
						cout << "Cube = " << a << ", Triple = (" << i << "," << j << "," << k << ")" << endl;
					}
				}
			}
		}
	}
	return 0;
}