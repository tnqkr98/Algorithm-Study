#include <string>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <set>
using namespace std;
string strlower(string str) {
	string res = "";
	for (auto c : str)
		res += tolower(c);
	return res;
}
int solution(string str1, string str2) {
	multiset<string>ms1, ms2;
	vector<string>::iterator iter;
	str1 = strlower(str1);
	str2 = strlower(str2);

	for (int i = 0; i < str1.size(); i++)
		if (i + 1 < str1.size() &&
			str1[i] >= 'a' && str1[i] <= 'z' &&
			str1[i + 1] >= 'a' && str1[i + 1] <= 'z')
			ms1.insert(str1.substr(i, 2));

	for (int i = 0; i < str2.size(); i++)
		if (i + 1 < str2.size() &&
			str2[i] >= 'a' && str2[i] <= 'z' &&
			str2[i + 1] >= 'a' && str2[i + 1] <= 'z')
			ms2.insert(str2.substr(i, 2));

	vector<string> ms3(ms1.size() + ms2.size());
	iter = set_union(ms1.begin(), ms1.end(), ms2.begin(), ms2.end(), ms3.begin());
	ms3.resize(iter - ms3.begin());

	vector<string> ms4(ms1.size() + ms2.size());
	iter = set_intersection(ms1.begin(), ms1.end(), ms2.begin(), ms2.end(), ms4.begin());
	ms4.resize(iter - ms4.begin());

	double res;
	if (ms3.size() != 0)
		res = (double)ms4.size() / ms3.size();
	else
		res = 1;
	res *= 65536;
	return (int)res;
}