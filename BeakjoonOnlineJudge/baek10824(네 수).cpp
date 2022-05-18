#include <iostream>
#include <string>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long A = stol(to_string(a) + to_string(b));
	long long B = stol(to_string(c) + to_string(d));
	cout << A + B;
	return 0;
}