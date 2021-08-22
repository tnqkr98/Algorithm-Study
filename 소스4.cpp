//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int solution(vector<int> goods, vector<int> boxes) {
//	int answer=0,top=0;
//	sort(goods.begin(), goods.end(), greater<int>());
//	sort(boxes.begin(), boxes.end(), greater<int>());
//	for (int i = 0; i < goods.size(); i++) {
//		if (boxes[top] >= goods[i]) {
//			top++;
//			answer++;
//		}
//	}
//	return answer;
//}
//
//int main() {
//
//	vector<int> g = {1,2};
//	vector<int> b = { 2,3,1 };
//	cout << solution(g, b);
//	return 0;
//}