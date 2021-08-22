//#include <queue>
//#include <iostream>
//using namespace std;
//typedef struct {
//	int v, d;
//}Q;
//
//struct cmp {
//	bool operator()(Q a, Q b) {
//		return a.d > b.d;
//	}
//};
//
//int main() {
//	priority_queue<Q, vector<Q>, cmp> q;
//	q.push({ 1,10 });
//	q.push({ 2,15 });
//	q.push({ 3,22 });
//	q.push({ 4,32 });
//	q.push({ 5,2 });
//	q.push({ 6,5 });
//	q.push({ 7,8 });
//	while (!q.empty()) {
//		cout << q.top().v <<" "<<q.top().d<<endl;
//		q.pop();
//	}
//	return 0;
//}