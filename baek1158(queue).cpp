//// https://www.acmicpc.net/problem/1158
//// ���� 1158 �� : �似Ǫ�� ����
//// ���� �˰��� : Queue
//
//#include <iostream>
//#include <queue>
//using namespace std;
//int main() {
//	queue<int>q;
//	int n, k,i,j=1,cnt=0;
//	cin >> n >> k;
//	for (i = 1; i <= n; i++)
//		q.push(i);
//	cout << "<";
//	while (!q.empty()) {
//		if (j != k) {
//			q.push(q.front());
//			q.pop();
//			j++;
//		}
//		else if(j == k && cnt!=n-1){
//			cout << q.front() << ", ";
//			q.pop();
//			cnt++;
//			j = 1;
//		}
//		else if (j == k && cnt == n-1) {
//			cout << q.front() << ">";
//			q.pop();
//		}
//	}
//	return 0;
//}