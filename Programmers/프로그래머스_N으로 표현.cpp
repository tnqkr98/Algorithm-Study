#include <string>
#include <vector>
#include <unordered_set>
#include <cmath>
using namespace std;
unordered_set<int> uset[9];
int solution(int N, int number) {
	uset[1].insert(N);
	int unit = N;
	for (int i = 2; i <= 8; i++) {
		unit += (N * pow(10, i - 1));
		uset[i].insert(unit);
	}
	for (int i = 1; i <= 8; i++)
		for (int j = 1; j <= 8; j++) {
			if (i + j > 8) continue;
			for (auto ii : uset[i])
				for (auto jj : uset[j]) {
					uset[i + j].insert(ii + jj);
					uset[i + j].insert(ii * jj);
					if (abs(ii - jj) != 0)
						uset[i + j].insert(abs(ii - jj));
					if (ii >= jj)
						uset[i + j].insert(ii / jj);
					else
						uset[i + j].insert(jj / ii);
				}
		}

	for (int j = 1; j <= 8; j++)
		if (uset[j].count(number))
			return j;
	return -1;
}