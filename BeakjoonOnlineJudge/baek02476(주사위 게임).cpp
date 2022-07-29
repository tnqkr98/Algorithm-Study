#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n,max=0; cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c,s=0; cin >> a >> b >> c;
		vector<int> v = {a,b,c};
		if (a == b && b == c)
			s = 10000 + a * 1000;
		else if ((a == b && b != c) || (a == c && b != c))
			s = 1000 + a * 100;
		else if (b == c && b != a)
			s = 1000 + b * 100;
		else
			s = *max_element(v.begin(), v.end()) * 100; 
		if (s > max) max = s;
	}
	cout << max;
	return 0;
}