#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
	string answer = "";
	int i = 0;

	for (auto c : s) {
		if (c == ' ') {
			answer += ' ';
			i = 0;
		}
		else {
			if (i % 2 == 0)
				answer += toupper(c);
			else
				answer += tolower(c);
			i++;
		}
	}
	return answer;
}