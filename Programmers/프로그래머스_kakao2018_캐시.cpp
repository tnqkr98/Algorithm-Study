#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int cacheSize, vector<string> cities) {
	int t = 0;
	vector<string> q;
	if (cacheSize == 0) return cities.size() * 5;
	for (int i = 0; i < cities.size(); i++) {
		transform(cities[i].begin(), cities[i].end(), cities[i].begin(), ::toupper);
		auto it = find(q.begin(), q.end(), cities[i]);
		if (q.size() < cacheSize) {
			if (it != q.end()) {
				q.erase(it);
				t++;
			}
			else
				t += 5;
		}
		else {
			if (it == q.end()) {
				q.erase(q.begin());
				t += 5;
			}
			else {
				q.erase(it);
				t++;
			}
		}
		q.push_back(cities[i]);
	}
	return t;
}