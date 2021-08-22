//#include <string>
//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <cstdlib>
//
//using namespace std;
//
//struct Node {
//	int x,y,val;
//	Node *left, *right;
//};
//
//
//bool cmp(const Node &p1, const Node &p2) {
//	if (p1.y > p2.y) 
//		return true;
//	else if (p1.y == p2.y) 
//		return p1.x < p2.x;
//	else 
//		return false;
//}
//
//vector<vector<int>> solution(vector<vector<int>> nodeinfo) {
//	vector<vector<int>> answer;
//	vector<Node> tree;
//
//	for (int i = 0; i < nodeinfo.size(); i++) 
//		tree.push_back({nodeinfo[i][0],nodeinfo[i][1],i+1 });
//	sort(tree.begin(),tree.end(),cmp);
//
//	for (int i = 0; i < tree.size(); i++) {
//
//	}
//	return answer;
//}
//
//
//
//int main() {
//	vector<vector<int>> v;
//	v.push_back(vector<int>({ 5,3 }));
//	v.push_back(vector<int>({ 11,5 }));
//	v.push_back(vector<int>({ 13,3 }));
//	v.push_back(vector<int>({ 3,5 }));
//	v.push_back(vector<int>({ 6,1 }));
//	v.push_back(vector<int>({ 1,3 }));
//	v.push_back(vector<int>({ 8,6 }));
//	v.push_back(vector<int>({ 7,2 }));
//	v.push_back(vector<int>({ 2,2 }));
//	solution(v);
//	return 0;
//}