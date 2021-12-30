#include <string>
#include <vector>
#include <map>
using namespace std;
int lchild[10001], rchild[10001];
vector<vector<pair<int, int>>> mmap(100001);
vector<vector<int>> answer(2);
void dq(int level, int px, int py, int pnum, int start, int end) {
	bool lfind = 0, rfind = 0;
	if (level == 0) return;
	for (int lv = level - 1; lv >= 0; lv--) {
		for (int i = 0; i < mmap[lv].size(); i++) {
			if (mmap[lv][i].first >= start && mmap[lv][i].first < px) {
				lchild[pnum] = mmap[lv][i].second;
				dq(lv, mmap[lv][i].first, lv, mmap[lv][i].second, start, px - 1);
				lfind = 1;
				break;
			}
		}
		if (lfind) break;
	}
	for (int lv = level - 1; lv >= 0; lv--) {
		for (int i = 0; i < mmap[lv].size(); i++) {
			if (mmap[lv][i].first >= px + 1 && mmap[lv][i].first <= end) {
				rchild[pnum] = mmap[lv][i].second;
				dq(lv, mmap[lv][i].first, lv, mmap[lv][i].second, px + 1, end);
				rfind = 1;
				break;
			}
		}
		if (rfind) break;
	}
}
void forder(int root) {
	if (root == 0) return;
	answer[0].push_back(root);
	forder(lchild[root]);
	forder(rchild[root]);
}
void border(int root) {
	if (root == 0) return;
	border(lchild[root]);
	border(rchild[root]);
	answer[1].push_back(root);
}

vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
	int rt, rty, rtx, max = 0, xmax = 0;
	for (int i = 0; i < nodeinfo.size(); i++) {
		mmap[nodeinfo[i][1]].push_back({ nodeinfo[i][0],i + 1 });
		if (nodeinfo[i][1] >= max) {
			max = nodeinfo[i][1];
			rt = i + 1;
			rty = nodeinfo[i][1];
			rtx = nodeinfo[i][0];
		}
		if (nodeinfo[i][0] > xmax)
			xmax = nodeinfo[i][0];
	}
	if (nodeinfo.size() == 1) {
		answer[0].push_back(rt);
		answer[1].push_back(rt);
	}
	else {
		dq(rty, rtx, rty, rt, 0, xmax + 1);
		forder(rt);
		border(rt);
	}
	return answer;
}