#include <string>
#include <vector>
#include <map>
using namespace std;
map<string, int> num;
int p[10001];
vector<int> ans;
void calReward(int start, int money) {
	ans[start] += money - money / 10;
	if (p[start] != -1)
		calReward(p[start], money / 10);
}
vector<int> solution(vector<string> enroll, vector<string> referral, vector<string> seller, vector<int> amount) {
	ans = vector<int>(enroll.size(), 0);
	for (int i = 0; i < enroll.size(); i++)
		num[enroll[i]] = i;
	for (int i = 0; i < referral.size(); i++) {
		if (referral[i][0] != '-')
			p[i] = num[referral[i]];
		else p[i] = -1;
	}
	for (int i = 0; i < seller.size(); i++)
		calReward(num[seller[i]], amount[i] * 100);
	return ans;
}