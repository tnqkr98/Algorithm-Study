//#include <vector>
//using namespace std;
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