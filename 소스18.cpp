//#include <string>
//#include <vector>
//#include <queue>
//#include <iostream>
//using namespace std;
//struct rs { int r, s; };
//struct cmp {
//	bool operator()(rs a, rs b) {
//		return a.s > b.s;
//	}
//};
//
//int solution(vector<vector<int>> jobs) {
//	int answer = 0, sum = 0;
//	int req, time = 0, ji = 0;
//	priority_queue<rs, vector<rs>, cmp> pq;
//	for (int t = 0; t <= 2000; t++) {
//		if (ji < jobs.size() && jobs[ji][0] == t) {
//			pq.push({ jobs[ji][0],jobs[ji][1] });
//			ji++;
//		}
//		if (!pq.empty() && time == 0) {
//			req = pq.top().r;
//			time = pq.top().s;
//			pq.pop();
//			sum += t + time - req;
//		}
//		time--;
//	}
//	answer = sum / jobs.size();
//	return answer;
//}
//
//int main() {
//	vector<int> v[3] = {{0,3},{1,9},{2,6} };
//	vector<vector<int>> vv = { v[0],v[1],v[2] };
//	cout<<solution(vv);
//	return 0;
//}