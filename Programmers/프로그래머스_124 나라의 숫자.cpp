#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(int n) {
	string answer = "";
	while (n > 0) {
		if (n % 3 != 0) answer += to_string(n % 3);
		else {
			answer += to_string(4);
			n -= 1;
		}
		n /= 3;
	}
	reverse(answer.begin(), answer.end());
	return answer;
}