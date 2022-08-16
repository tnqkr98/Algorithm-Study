#include <iostream>
using namespace std;
int main() {
	int sum = 0;
	int n;
	while (scanf("%d", &n) == 1) {
		sum += n;
	}
	printf("%d", sum);
	return 0;
}