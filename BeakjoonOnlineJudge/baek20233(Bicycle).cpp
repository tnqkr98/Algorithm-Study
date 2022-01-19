#include <iostream>
using namespace std;
int main() {
	int a, x, b, y, t;
	cin >> a >> x >> b >> y >> t;
	if(t>=30)cout << (t - 30)*x*21 + a << " ";
	else cout << a <<" ";
	if(t>=45)cout << (t - 45)*y*21 + b;
	else cout << b;

	return 0;
}