//#include <string>
//#include <vector>
//#include <cstring>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> tok(string s, string token) {
//	vector<int>res;
//	char *buf = new char[100];
//	strcpy(buf, s.c_str());
//
//	char *tok = strtok(buf, token.c_str());
//	for (int i = 0; tok != nullptr; i++) {
//		if (i == 0 && string(tok).compare("cpp")==0)
//			res.push_back(0);
//		else if (i == 0 && string(tok).compare("java") == 0)
//			res.push_back(1);
//		else if (i == 0 && string(tok).compare("python") == 0)
//			res.push_back(2);
//
//		if (i == 1 && string(tok).compare("backend") == 0)
//			res.push_back(0);
//		else if (i == 1 && string(tok).compare("frontend") == 0)
//			res.push_back(1);
//
//		if (i == 2 && string(tok).compare("junior") == 0)
//			res.push_back(0);
//		else if (i == 2 && string(tok).compare("senior") == 0)
//			res.push_back(1);
//
//		if (i == 3 && string(tok).compare("chicken") == 0)
//			res.push_back(0);
//		else if (i == 3 && string(tok).compare("pizza") == 0)
//			res.push_back(1);
//
//		if (i == 4)
//			res.push_back(stoi(string(tok)));
//		tok = strtok(nullptr, token.c_str());
//	}
//	return res;
//}
//vector<int> solution(vector<string> info, vector<string> query) {
//	vector<int> answer;
//	vector<int>*tr[3][2][2][2];
//	for (int i = 0; i < 3; i++)
//		for (int j = 0; j < 2; j++)
//			for (int k = 0; k < 2; k++)
//				for (int l = 0; l < 2; l++)
//					tr[i][j][k][l] = new vector<int>();
//	//init
//	//to
//	vector<int> inf = tok(query[0]," ");
//	return answer;
//}
//
//int main() {
//	vector<string> s = {
//		"java backend junior pizza 150","python frontend senior chicken 210","python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50"
//	};
//	vector<string> s2 = {
//		"java and backend and junior and pizza 100","python and frontend and senior and chicken 200","cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 150"
//	};
//	solution(s, s2);
//
//	return 0;
//}