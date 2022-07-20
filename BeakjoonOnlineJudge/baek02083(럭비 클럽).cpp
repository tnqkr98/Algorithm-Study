#include <iostream>
using namespace std;
int main() {
	while (1) {
		string s;
		int a, b;
		cin>>s>>a>>b;
		if (s == "#")break;
		if (a > 17 || b >= 80) cout << s << " Senior" << endl;
		else cout << s << " Junior" << endl;
	}
	return 0;
}