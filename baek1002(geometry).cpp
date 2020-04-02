//  https://www.acmicpc.net/problem/1002
//  백준 1002 : 터렛
//  관련 알고리즘 : Geometry, math 

#include <iostream>
#define sq(x) ((x)*(x))
#define max(a,b) (((a)>(b))?(a):(b))
#define min(a,b) (((a)>(b))?(b):(a))
using namespace std;
double len_sq(double x1, double y1, double x2, double y2) {
	return sq(x1 - x2) + sq(y1 - y2);
}
int main() {
	int t, i;
	int x1, y1, r1, x2, y2, r2, len;
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		len = len_sq(x1, y1, x2, y2);
		if (x1 == x2 && y1 == y2 && r1 == r2)
			cout << "-1" << endl;
		else if (sq(r1 + r2) == len ||
			len == sq(max(r1, r2) - min(r1, r2)))
			cout << "1" << endl;
		else if (sq(r1 + r2) < len ||
			len < sq(max(r1, r2) - min(r1, r2)))
			cout << "0" << endl;
		else if (sq(r1 + r2) > len)
			cout << "2" << endl;
	}
	return 0;
}