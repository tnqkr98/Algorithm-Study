//#include <string>
//#include <vector>
//#include <map>
//#include <algorithm>
//using namespace std;
//
//vector<string> solution(vector<string> orders, vector<int> course) {
//	map<string, int> m;
//	vector<string> answer;
//	int max_num[20] = { 0 };
//	for (auto i : orders) {
//		sort(i.begin(), i.end());
//		if (i.size() == 2) {
//			auto a = m.find(i);
//			if (a == m.end())
//				m.insert(make_pair(i, 1));
//			else {
//				a->second++;
//				if (a->second > max_num[a->first.size()])
//					max_num[a->first.size()] = a->second;
//			}
//			continue;
//		}
//		auto a = m.find(i);
//		if (a == m.end())
//			m.insert(make_pair(i, 1));
//		else {
//			a->second++;
//			if (a->second > max_num[a->first.size()])
//				max_num[a->first.size()] = a->second;
//		}
//		for (int j = 1; j < i.size() - 1; j++) {
//			for (int k = 0; k < i.size(); k++) {
//				for (int l = k + 1; l <= i.size() - j; l++) {
//					string tar = i[k] + i.substr(l, j);
//					auto fin = m.find(tar);
//					if (fin == m.end())
//						m.insert(make_pair(tar, 1));
//					else {
//						fin->second++;
//						if (fin->second > max_num[fin->first.size()])
//							max_num[fin->first.size()] = fin->second;
//					}
//				}
//			}
//		}
//	}
//	for (auto i = m.begin(); i != m.end(); i++)
//		if (i->second >= 2 && i->second == max_num[i->first.size()] &&
//			find(course.begin(), course.end(), i->first.size()) != course.end()) {
//			answer.push_back(i->first);
//		}
//	sort(answer.begin(), answer.end());
//	return answer;
//}
//int main() {
//	vector<string> v = { "XYZ", "XWY", "WXA" };
//	vector<int> v1 = { 2,3,4 };
//	solution(v, v1);
//
//	return 0;
//}