#include <iostream>
#include <string>
using namespace std;
int main() {
	int c = 0;
	for (int i = 1; i <= 5; i++) {
		string s; cin >> s;
		for (int j = 0; j < s.size()-2; j++) 
			if (s.substr(j, 3) == "FBI") {
				c++;
				cout << i << " ";
				break;
			}
	}
	if (c == 0)
		cout << "HE GOT AWAY!";
	return 0;
}