#include <iostream>
using namespace std;
int main() {
	int n,sum=0; cin >> n;
	string s; cin >> s;
	for (int i = 0; i < n; i++) 
		sum += s[i] - 'A' + 1;
	cout << sum;
	return 0;
}