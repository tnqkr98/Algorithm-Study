#include <iostream>
using namespace std;
int main() {
	char s[101];
	int n = 0;
	while (cin.getline(s, 101)) n++;
	cout << n;
	return 0;
}