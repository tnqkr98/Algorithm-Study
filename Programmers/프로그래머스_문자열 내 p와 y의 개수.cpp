#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
	bool answer = true;
	int pcount = 0, ycount = 0;
	for (char c : s) {
		if (c == 'p' || c == 'P') pcount++;
		if (c == 'y' || c == 'Y') ycount++;
	}
	if (pcount == ycount)
		answer = true;
	else
		answer = false;

	return answer;
}