#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	while(1){
		cin >> a >> b >> c;
		if (a + b + c == 0) break;
		if (a == 0) cout << c / b << " " << b << " " << c<<endl;
		else if(b == 0) cout << a << " " << c / a << " " << c << endl;
		else cout << a << " " << b << " " << a*b << endl;
	}
	return 0;
}