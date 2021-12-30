#include <string>
#include <vector>
#include <set>
using namespace std;
vector<vector<string>> r;
bool sel[8];
int answer = 0, colsiz, rowsiz;

bool isUniqu(vector<bool> se) {
	set<string> s; // 유일성 검증용 집합
	vector<string> record(20, "");
	for (int i = 0; i < colsiz; i++)
		if (se[i])
			for (int j = 0; j < rowsiz; j++)
				record[j] += r[j][i];

	for (int i = 0; i < rowsiz; i++) {
		if (s.find(record[i]) == s.end())
			s.insert(record[i]);
		else
			return false;
	}
	return true;
}

bool isMini(vector<bool> se) {
	for (int i = 0; i < colsiz; i++)
		if (se[i]) {
			se[i] = 0;
			if (isUniqu(se)) return false;
			se[i] = 1;
		}
	return true;
}

void proon(int idx) {
	vector<bool> se(8);
	int cnt = 0;
	for (int i = 0; i < colsiz; i++) {
		if (sel[i]) cnt++;
		se[i] = sel[i];
	}

	if (isUniqu(se)) {
		if (cnt > 1 && isMini(se)) answer++;   // 후보키
		else if (cnt == 1) answer++;
	}
	else {       // 유일성 만족 X
		for (int i = idx + 1; i < colsiz; i++) {
			sel[i] = 1;
			proon(i);
			sel[i] = 0;
		}
	}
}

int solution(vector<vector<string>> relation) {
	colsiz = relation[0].size();
	rowsiz = relation.size();
	r = relation;
	for (int i = 0; i < colsiz; i++) {
		sel[i] = 1;
		proon(i);
		sel[i] = 0;
	}
	return answer;
}