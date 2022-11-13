#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	int arr[7] = { 2,7,6,5,4,3,2 },sum=0;
	char c[11] = { 'J','A','B','C','D','E','F','G','H','I','Z' };
	for (int i = 0; i < s.size(); i++) {
		sum+=(s[i] - '0')* arr[i];
	}
	sum %= 11;
	cout << c[sum]
	return 0;
}