#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,c=0; cin >> n;
	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		int sum = 0;
		for (int j = 0; j < s.size(); j++) 
			sum += s[j] - '0';
		if (i % sum == 0) c++;
	}
	cout << c;
	return 0;
}