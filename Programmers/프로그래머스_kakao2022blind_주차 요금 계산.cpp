#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
map<string, int> in, nu;  // 상태(Out은 0, IN은 입차 시간(분)), 누적시간
int timetomin(string s) {
	int res = 0;
	res += stoi(s.substr(0, 2)) * 60;
	res += stoi(s.substr(3, 2));
	return res;
}
vector<int> solution(vector<int> fees, vector<string> records) {
	vector<int> answer;
	vector<pair<int, int>> f;
	for (auto r : records) {
		string time = r.substr(0, 5);
		string num = r.substr(6, 4);
		string state = r.substr(11, 2);
		if (state == "IN") {
			in[num] = timetomin(time);
			if (in[num] == 0)
				in[num] = -1;   // 입차시간이 00:00 인경우
		}
		else {
			if (in[num] != -1)
				nu[num] += (timetomin(time) - in[num]);
			else    // 입차시간이 00:00 인경우
				nu[num] += timetomin(time);
			in[num] = 0;
		}
	}

	for (auto state : in)       // 들어와서 안나간차량
		if (state.second != 0) {
			if (state.second != -1)
				nu[state.first] += (timetomin("23:59") - state.second);
			else    // 입차시간이 00:00 인경우
				nu[state.first] += timetomin("23:59");
		}



	for (auto car : nu) {
		if (car.second <= fees[0])
			f.push_back({ stoi(car.first),fees[1] });
		else
			f.push_back({ stoi(car.first),fees[1] + ceil((double)(car.second - fees[0]) / fees[2])*fees[3] });
	}
	sort(f.begin(), f.end());
	for (auto i : f)
		answer.push_back(i.second);
	return answer;
}