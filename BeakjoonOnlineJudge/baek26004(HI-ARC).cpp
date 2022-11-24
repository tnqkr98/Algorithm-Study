#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >>n;
	string s; cin >>s;
	int h = 0, i = 0, a = 0, r = 0, c = 0;
	for (int j = 0; j < n; j++) {
		if (s[j] == 'H') h++;
		else if (s[j] == 'I') i++;
		else if (s[j] == 'A') a++;
		else if (s[j] == 'R') r++;
		else if (s[j] == 'C') c++;
	}
	vector<int> v = { h,i,a,r,c };
	sort(v.begin(), v.end());
	cout << v[0];
	return 0;
}