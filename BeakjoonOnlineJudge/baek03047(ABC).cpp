#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main() {
	int arr[3];
	for (int i = 0; i < 3; i++)
		cin >> arr[i];
	sort(arr, arr + 3);
	map<char, int> m;
	m['A'] = arr[0];
	m['B'] = arr[1];
	m['C'] = arr[2];
	string s; cin >> s;
	for (auto i : s) 
		cout << m[i]<<" ";
	
	return 0;
}