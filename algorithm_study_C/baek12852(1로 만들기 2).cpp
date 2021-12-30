#include <iostream>
#include <algorithm>
#include <climits>
#include <queue>
using namespace std;
queue <pair<int, vector<int>>> q;
vector<int> gv;
int mmin[1000000],n,gmin=INT_MAX;
void bfs() {
	if (q.empty()) return;
	auto cur = q.front();
	if (cur.first == 1) {
		if (cur.second.size() < gmin) {
			gmin = cur.second.size()-1;
			gv = cur.second;
			return;
		}
	}
	q.pop();

	if (cur.first % 3 == 0 && mmin[cur.first/3] >cur.second.size()+1) {
		vector<int> v = cur.second;
		v.push_back(cur.first / 3);
		mmin[cur.first / 3] = v.size();
		q.push({ cur.first / 3, v });
	}
	if (cur.first % 2 == 0 && mmin[cur.first/2] > cur.second.size() + 1) {
		vector<int> v = cur.second;
		v.push_back(cur.first / 2);
		mmin[cur.first / 2] = v.size();
		q.push({ cur.first / 2, v });
	}
	if (cur.first -1 >= 1 && mmin[cur.first - 1] > cur.second.size() + 1) {
		vector<int> v = cur.second;
		v.push_back(cur.first - 1);
		mmin[cur.first - 1] = v.size();
		q.push({ cur.first - 1, v });
	}
	bfs();
}
int main() {
	cin >> n;
	fill(mmin, mmin + 1000000, INT_MAX);
	vector<int> v = { n };
	q.push({ n, v });
	bfs();
	cout << gmin << endl;
	for (int i = 0; i < gv.size(); i++)
		cout << gv[i] << " ";
	return 0;
}