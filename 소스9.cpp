//#include <string>
//#include <vector>
//#include <iostream>
//using namespace std;
//int solution(vector<string> lines) {
//	int max = 0;
//	int tr[2001][2] = { 0 };
//	vector<int>time;
//	for (int i = 0; i < lines.size(); i++) {
//		tr[i][1] += stoi(lines[i].substr(11, 2)) * 1000*60*60;
//		tr[i][1] += stoi(lines[i].substr(14, 2)) * 1000*60;
//		tr[i][1] += stoi(lines[i].substr(17, 2)) * 1000;
//		tr[i][1] += stoi(lines[i].substr(20, 3));
//		string tmp = lines[i].substr(24);
//		tmp.pop_back();
//		double tnum = stod(tmp) * 1000;
//		int dif = (int)tnum;
//		tr[i][0] = tr[i][1] - dif+1;
//	}
//
//	for (int i = 0; i < lines.size(); i++) 
//		time.push_back(tr[i][1]);
//
//	for (int i = 0; i < time.size(); i++) {
//		int cnt = 0;
//		for (int j = i+1; j < lines.size(); j++) {
//			if(tr[j][0] < time[i]+1000)
//				cnt++;
//		}
//		if (cnt > max) max = cnt;
//	}
//
//	return max+1;
//}
//
//int main() {
//	vector<string> s;
//	s.push_back("2016-09-15 01:00:00.000 0.001s");
//	//s.push_back("2016-09-15 01:00:04.001 2.0s");
//	//s.push_back("2016-09-15 01:00:07.000 2s");
//	//s.push_back("2016-09-15 00:00:00.000 3s");
//	//s.push_back("2016-09-15 20:59:57.421 0.351s");
//	/*s.push_back("2016-09-15 20:59:58.233 1.181s");
//	s.push_back("2016-09-15 20:59:58.299 0.8s");
//	s.push_back("2016-09-15 20:59:58.688 1.041s");
//	s.push_back("2016-09-15 20:59:59.591 1.412s");
//	s.push_back("2016-09-15 21:00:00.464 1.466s");
//	s.push_back("2016-09-15 21:00:00.741 1.581s");
//	s.push_back("2016-09-15 21:00:00.748 2.31s");
//	s.push_back("2016-09-15 21:00:00.966 0.381s");
//	s.push_back("2016-09-15 21:00:02.066 2.62s");*/
//	cout<<solution(s);
//
//	return 0;
//}