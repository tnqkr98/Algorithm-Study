//#include <string>
//#include <vector>
//#include <iostream>
//
//using namespace std;
//struct rc { int row, col; };
//
//void rotate(vector<vector<int>> *key) {
//	int tmp[21][21] = { 0 };
//	for (int i = 0; i < key->size(); i++)
//		for (int j = 0; j < key->size(); j++)
//			tmp[j][key->size() - i - 1] = (*key)[i][j];
//
//	for (int i = 0; i < key->size(); i++)
//		for (int j = 0; j < key->size(); j++)
//			(*key)[i][j] = tmp[i][j];
//}
//
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//	bool answer = false, init = true, end = false;
//	int nrow = 0, ncol = 0, row_min = 0, col_min = 0, maxlen = 0, newarr[21][21] = { 0 }, correct = 0;
//	vector<rc> cm;
//	for (int i = 0; i < lock.size(); i++)
//		for (int j = 0; j < lock.size(); j++) {
//			if (lock[i][j] == 0) {
//				if (init) {
//					nrow = i; ncol = j;
//					cm.push_back({ 0,0 });
//					init = false;
//				}
//				else
//					cm.push_back({ i - nrow,j - ncol });
//
//				if (i - nrow < row_min)
//					row_min = i - nrow;
//				if (j - ncol < col_min)
//					col_min = j - ncol;
//			}
//		}
//	for (int i = 0; i < cm.size(); i++) {
//		cm[i].row += (row_min*(-1));
//		cm[i].col += (col_min*(-1));
//		newarr[cm[i].row][cm[i].col] = 1;
//		if (cm[i].row > maxlen)
//			maxlen = cm[i].row;
//		if (cm[i].col > maxlen)
//			maxlen = cm[i].col;
//	}
//	int bin = 0;
//	for (int i = 0; i < key.size(); i++)
//		for (int j = 0; j < key.size(); j++)
//			bin += key[i][j];
//
//	if (key.size() <= maxlen || bin == 0)
//		answer = false;
//	else if (cm.size() == 0 || (bin == 1 && cm.size()==1))
//		answer = true;
//	else {
//		for (int r = 0; r < 4 && !end; r++) {
//			for (int sr = 0; sr <= key.size() - maxlen - 1 && !end; sr++)
//				for (int sc = 0; sc <= key.size() - maxlen - 1 && !end; sc++) {
//					for (int i = 0; i <= maxlen && !end; i++) {
//						for (int j = 0; j <= maxlen; j++) {
//							if (key[sr + i][sc + j] == newarr[i][j] && newarr[i][j])
//								correct++;
//							if (correct == cm.size()) {
//								answer = true;
//								end = true;
//								break;
//							}
//						}
//					}
//					correct = 0;
//				}
//			rotate(&key);
//		}
//	}
//	return answer;
//}
//int main() {
//	vector<vector<int>>key;
//	vector<int> v1 = { 1,0,0 };
//	key.push_back(v1);
//	vector<int> v2 = { 0,0,0 };
//	key.push_back(v2);
//	vector<int> v3 = { 0,1,1 };
//	key.push_back(v3);
//
//	vector<vector<int>>lock;
//	vector<int> v4 = { 1,1,1 };
//	lock.push_back(v4);
//	vector<int> v5 = { 1,0,0 };
//	lock.push_back(v5);
//	vector<int> v6 = { 0,1,1 };
//	lock.push_back(v6);
//
//	cout << solution(key,lock)<<endl;
//	return 0;
//}