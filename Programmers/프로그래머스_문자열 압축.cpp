//level2 (2020 KAKAO BLIND RECRUITMENT)

#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	string tmp, cmp, newstr = "";
	int answer = 0, num = 1, min = 1001;
	for (int dan = 1; dan < s.size(); dan++) {
		tmp = s.substr(0, dan);
		for (int pos = dan; pos < s.size(); pos += dan) {
			cmp = s.substr(pos, dan);
			if (tmp.compare(cmp) == 0)
				num++;
			else {
				if (num == 1)
					newstr = newstr + tmp;
				else
					newstr = newstr + to_string(num) + tmp;
				tmp = cmp;
				num = 1;
			}
			//if (pos + dan > s.size())
			//	newstr += tmp;
		}
		if (num == 1)
			newstr = newstr + tmp;
		else
			newstr = newstr = newstr + to_string(num) + tmp;

		if (newstr.size() < min)
			min = newstr.size();
		//cout << newstr << endl;
		newstr = "";
		num = 1;
	}
	if (s.size() == 1)
		return 1;
	else
		return min;
}