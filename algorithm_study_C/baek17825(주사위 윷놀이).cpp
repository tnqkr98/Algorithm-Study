#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[33]; // 0:시작, 32: 도착
int mov[10],mal[4],mmax=0;
int score[33] = { 0,2,4,6,8,10,12,14,16,18,20
,22,24,26,28,30,32,34,36,38,13,16,19,22,24,28,27,26
,25,30,35,40,0 };
int mmove(int malnum, int cur, int kan, int cnt) { // 도착지반환
	if (cur == 32) return cur;
	if (kan == 0) {
		bool isdup = false;
		for (int i = 0; i < 4; i++)
			if (mal[i] == cur)
				isdup = true;
		if (isdup) return -1;	// 도착지에 말이 있는경우
		else return cur;
	}
	if (cnt == 0 && graph[cur].size() == 2)	// 파란원에서 출발시
		return mmove(malnum, graph[cur][1], kan - 1, cnt + 1);
	else
		return mmove(malnum, graph[cur][0],kan-1,cnt+1);
}

void back(int d,int s) {
	if (d == 10) {
		if (s > mmax) mmax = s;
		return;
	}
	for (int i = 0; i < 4; i++) {
		if (mal[i] != 32) {
			int des = mmove(i, mal[i], mov[d], 0);
			if (des != -1) {
				int origin = mal[i];
				mal[i] = des;
				back(d + 1, s + score[des]);
				mal[i] = origin;
			}
		}
	}
}
int main() {
	for (int i = 0; i < 10; i++) cin >> mov[i];
	graph[0].push_back(1);
	graph[1].push_back(2);
	graph[2].push_back(3);
	graph[3].push_back(4);
	graph[4].push_back(5);
	graph[5] = { 6,20 };
	graph[6].push_back(7);
	graph[7].push_back(8);
	graph[8].push_back(9);
	graph[9].push_back(10);
	graph[10] = { 11,23 };
	graph[11].push_back(12);
	graph[12].push_back(13);
	graph[13].push_back(14);
	graph[14].push_back(15);
	graph[15] = { 16,25 };
	graph[16].push_back(17);
	graph[17].push_back(18);
	graph[18].push_back(19);
	graph[19].push_back(31);
	graph[20].push_back(21);
	graph[21].push_back(22);
	graph[22].push_back(28);
	graph[23].push_back(24);
	graph[24].push_back(28);
	graph[25].push_back(26);
	graph[26].push_back(27);
	graph[27].push_back(28);
	graph[28].push_back(29);
	graph[29].push_back(30);
	graph[30].push_back(31);
	graph[31].push_back(32);
	back(0,0);
	cout << mmax;
	return 0;
}