#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int nn;
bool cmp(const string &a, const string &b) {
	if (a[nn] == b[nn]) {
		if (a.compare(b) < 0)
			return true;
		else
			return false;
	}
	else if (a[nn] < b[nn])
		return true;
	else if (a[nn] > b[nn])
		return false;
}

vector<string> solution(vector<string> strings, int n) {
	vector<string> answer;
	nn = n;
	sort(strings.begin(), strings.end(), cmp);
	return strings;
}