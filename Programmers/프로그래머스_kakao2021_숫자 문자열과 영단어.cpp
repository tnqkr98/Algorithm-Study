#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	string ans = "";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') ans.push_back(s[i]);
		else if (s[i] == 'z') {
			ans.push_back('0');
			i += 3;
		}
		else if (s[i] == 'o') {
			ans.push_back('1');
			i += 2;
		}
		else if (s[i] == 't' && s[i + 1] == 'w') {
			ans.push_back('2');
			i += 2;
		}
		else if (s[i] == 't' && s[i + 1] == 'h') {
			ans.push_back('3');
			i += 4;
		}
		else if (s[i] == 'f' && s[i + 1] == 'o') {
			ans.push_back('4');
			i += 3;
		}
		else if (s[i] == 'f' && s[i + 1] == 'i') {
			ans.push_back('5');
			i += 3;
		}
		else if (s[i] == 's' && s[i + 1] == 'i') {
			ans.push_back('6');
			i += 2;
		}
		else if (s[i] == 's' && s[i + 1] == 'e') {
			ans.push_back('7');
			i += 4;
		}
		else if (s[i] == 'e') {
			ans.push_back('8');
			i += 4;
		}
		else {
			ans.push_back('9');
			i += 3;
		}
	}
	return stoi(ans);
}