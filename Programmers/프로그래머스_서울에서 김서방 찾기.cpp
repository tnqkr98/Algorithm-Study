#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	string answer = "";
	int c = 0;
	for (auto s : seoul) {
		if (s.compare("Kim") == 0)
			break;
		c++;
	}
	return "�輭���� " + to_string(c) + "�� �ִ�";
}