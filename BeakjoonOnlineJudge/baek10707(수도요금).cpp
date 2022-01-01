#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e,x,y;
	cin >> a >> b >> c >> d >> e;
	x = a * e; 
	if(e>c) y = b + (e - c)*d;
	else y = b;
	if (x > y)cout << y;
	else cout << x;
	return 0;
}