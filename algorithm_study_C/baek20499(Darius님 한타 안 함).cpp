#include <iostream>
#include <string>
using namespace std;
int main() {
	string s; cin >> s;
	string sub="";
	int arr[3], j = 0,past=0;
	for (int i = 0; i < s.size(); i++) 
		if (s[i] == '/') {
			arr[j++] = stoi(s.substr(past, i));
			past = i + 1;
		}
	arr[j] = stoi(s.substr(past, s.size()-1));
	if (arr[0] + arr[2] < arr[1] || arr[1] == 0)
		cout << "hasu";
	else cout << "gosu";
	return 0;
}