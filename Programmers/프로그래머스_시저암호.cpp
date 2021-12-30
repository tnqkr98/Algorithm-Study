#include <string>
#include <vector>
using namespace std;
string solution(string s, int n) {
	string answer = "";
	for (char c : s) {
		if (c >= 'a' && c <= 'z')
			answer += ((c + n - 'a') % 26 + 'a');
		else if (c >= 'A' && c <= 'Z')
			answer += ((c + n - 'A') % 26 + 'A');
		else
			answer += ' ';
	}
	return answer;
}