#include <iostream>
using namespace std;
int main() {
	int n, h, v;
	cin >> n >> h >> v;
	int s1, s2;
	s1 = n - h >= h ? n - h : h;
	s2 = n - v >= v ? n - v : v;
	cout << s1 * s2 * 4;
	return 0;
}