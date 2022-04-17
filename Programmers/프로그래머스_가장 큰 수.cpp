#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(int a, int b) {
	string sa = to_string(a), sb = to_string(b);
	return stoi(sa + sb) > stoi(sb + sa);
}

string solution(vector<int> numbers) {
	string answer = "";
	sort(numbers.begin(), numbers.end(), cmp);
	for (int i = 0; i < numbers.size(); i++)
		answer += to_string(numbers[i]);
	return answer[0] == '0' ? "0" : answer;
}