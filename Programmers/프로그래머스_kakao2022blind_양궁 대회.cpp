#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
struct win {
	vector<int> res;
	int s;
	long long w;
};
vector<win> wcase;
vector<int> ape, lion;
int N, ls = 0, as = 0;
long long lw = 0;
void backtrack(int d, int k) {
	if (d == 11) {
		if (ls > as) {
			lion[10] += k;
			lw += pow(10, 10) * k;
			wcase.push_back({ lion,ls - as,lw });
			lw -= pow(10, 10) * k;
		}
		return;
	}

	if (k > ape[d]) {	// ¶óÀÌ¾ð Á¡¼ö È¹µæÀÇ °æ¿ì
		lion.push_back(ape[d] + 1);
		ls += 10 - d;
		lw += pow(10, d) * (ape[d] + 1);
		backtrack(d + 1, k - (ape[d] + 1));
		ls -= 10 - d;
		lw -= pow(10, d) * (ape[d] + 1);
		lion.pop_back();
	}

	lion.push_back(0);		// ¾îÇÇÄ¡ Á¡¼ö È¹µæÀÇ °æ¿ì
	if (ape[d] > 0) as += 10 - d;
	backtrack(d + 1, k);
	if (ape[d] > 0) as -= 10 - d;
	lion.pop_back();
}

bool cmp(win a, win b) {
	if (a.s > b.s) return 1;
	else if (a.s == b.s) {
		if (a.w > b.w) return 1;
	}
	return 0;
}

vector<int> solution(int n, vector<int> info) {
	vector<int> answer;
	ape = info;
	N = n;
	backtrack(0, n);
	if (wcase.size() == 0) answer.push_back(-1);
	else {
		sort(wcase.begin(), wcase.end(), cmp);
		answer = wcase[0].res;
	}
	return answer;
}