#include <string>
#include <cmath>
#include <vector>
using namespace std;

int solution(string dartResult) {
	int answer = 0, cur = 0;
	bool num = true;
	vector<int> v;
	for (int i = 0; i < dartResult.size(); i++) {
		if (dartResult[i] >= '0' && dartResult[i] <= '9' &&num) {
			cur = i;
			num = false;
			continue;
		}
		if (dartResult[i] == 'S') {
			v.push_back(stoi(dartResult.substr(cur, i - cur)));
			num = true;
		}
		else if (dartResult[i] == 'D') {
			v.push_back(pow(stoi(dartResult.substr(cur, i - cur)), 2));
			num = true;
		}
		else if (dartResult[i] == 'T') {
			v.push_back(pow(stoi(dartResult.substr(cur, i - cur)), 3));
			num = true;
		}
		else if (dartResult[i] == '*') {
			v[v.size() - 1] *= 2;
			v[v.size() - 2] *= 2;
		}
		else if (dartResult[i] == '#')
			v[v.size() - 1] *= (-1);
	}
	for (auto i : v)
		answer += i;
	return answer;
}