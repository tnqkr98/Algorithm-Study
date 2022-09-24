#include <iostream>
#include <string>
using namespace std;
int main() {
	int n,s=0; cin >> n;
	for (int i = 1; i <= n; i++) {
		string num = to_string(i);
		for (int j = 0; j < num.size(); j++) {
			if (num[j] == '3' || num[j] == '6' || num[j] == '9')
				s++;
		}
	}
	cout << s;

	return 0;
}