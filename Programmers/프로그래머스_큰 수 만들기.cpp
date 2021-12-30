#include <string>
#include <vector>
using namespace std;
string solution(string number, int k) {
	string answer = "";
	vector<char> v(number.begin(), number.end());
	int len = number.size(), n = 0;
	k = len - k;
	while (k > 0) {
		int maxi;
		char max = 0;
		for (int j = n; j <= len - k; j++)
			if (max < v[j]) {
				max = v[j];
				maxi = j;
			}
		answer.push_back(max);
		n = maxi + 1;
		k--;
	}
	return answer;
}