#include <iostream>
using namespace std;
int wd[51][51][51] = { 0 };
int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) return 1;
	if (wd[a][b][c] != 0) return wd[a][b][c];
	if (a > 20 || b > 20 || c > 20) 
		wd[a][b][c] = w(20, 20, 20);
	else if (a < b && b < c) 
		wd[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	else 
		wd[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
	return wd[a][b][c];
}
int main() {
	int a, b, c;
	w(20, 20, 20);
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		cout << "w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c) << endl;
	}
	return 0;
}