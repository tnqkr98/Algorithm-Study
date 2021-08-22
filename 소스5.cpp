//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//typedef struct {
//	int id;
//	int time;
//} cff;
//vector<int> solution(int N,vector<int> coffee_times) {
//	vector<int> answer;
//	int min= coffee_times[0], idx = 0,len,newMin= coffee_times[0],tmp;
//	queue<cff> q;
//	while (idx != coffee_times.size() || !q.empty()) {
//		min = newMin;
//		while (q.size() != N && idx < coffee_times.size()) {
//			if (min > coffee_times[idx]) min = coffee_times[idx];
//			q.push({ idx + 1,coffee_times[idx] });
//			idx++;
//		}
//		len = q.size();
//		newMin = min;
//		for (int i = 0; i < len; i++) {
//			tmp = q.front().time - min;
//			if (tmp != 0) {
//				if (tmp < newMin) newMin = tmp;
//				q.push({ q.front().id,tmp});
//				q.pop();
//			}
//			else {
//				answer.push_back(q.front().id);
//				q.pop();
//			}
//		}
//	}
//	return answer;
//}
//
//int main() {
//	vector<int> g = {4,2,2,5,3};
//	vector<int> r = solution(3, g);
//	for (int i = 0; i < r.size(); i++) {
//		cout << r[i]<<" ";
//	}
//	return 0;
//}