#include <string>
using namespace std;
string solution(string phone_number) {
	string answer = "";
	for (int i = 0; i < phone_number.size() - 4; i++)
		answer += "*";
	return answer + phone_number.substr(phone_number.size() - 4, 4);
}