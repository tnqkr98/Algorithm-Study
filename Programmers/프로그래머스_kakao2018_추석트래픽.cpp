#include <string>
#include <vector>
using namespace std;
int solution(vector<string> lines) {
	int max = 0;
	int tr[2001][2] = { 0 };
	vector<int>time;
	for (int i = 0; i < lines.size(); i++) {
		tr[i][1] += stoi(lines[i].substr(11, 2)) * 1000 * 60 * 60;
		tr[i][1] += stoi(lines[i].substr(14, 2)) * 1000 * 60;
		tr[i][1] += stoi(lines[i].substr(17, 2)) * 1000;
		tr[i][1] += stoi(lines[i].substr(20, 3));
		string tmp = lines[i].substr(24);
		tmp.pop_back();
		double tnum = stod(tmp) * 1000;
		int dif = (int)tnum;
		tr[i][0] = tr[i][1] - dif + 1;
	}

	for (int i = 0; i < lines.size(); i++)
		time.push_back(tr[i][1]);

	for (int i = 0; i < time.size(); i++) {
		int cnt = 0;
		for (int j = i + 1; j < lines.size(); j++) {
			if (tr[j][0] < time[i] + 1000)
				cnt++;
		}
		if (cnt > max) max = cnt;
	}
	return max + 1;
}