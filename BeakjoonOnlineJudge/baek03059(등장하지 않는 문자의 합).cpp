#include <iostream>
#include <string>
using namespace std;
int main(){
	int n; cin >> n;
	while (n--) {
		int arr[26] = { 0 },sum=0;
		string s; cin >> s;
		for (auto i : s) arr[i - 'A']++;
		for (int i = 0; i < 26;i++) 
			if (arr[i] == 0) sum += i + 'A';
		cout << sum << endl;
	}
	return 0;
}