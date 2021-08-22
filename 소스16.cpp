//#include <iostream>
//#include <sstream>
//#include <vector>
//
//using namespace std;
//
//bool isquick(char p, int numOfQuickPlayers, char *namesOfQuickPlayers) {
//	for (int i = 0; i < numOfQuickPlayers; i++)
//		if (p == namesOfQuickPlayers[i])
//			return true;
//	return false;
//}
//
//void solution(int numOfAllPlayers, int numOfQuickPlayers, char *namesOfQuickPlayers, int numOfGames, int *numOfMovesPerGame) {
//	int cnt[26] = { 0 }, sulnum = 0, cur_sul = 0;
//	cnt[0] = 1;
//	vector<char> v;
//	for (int i = 0; i < numOfAllPlayers - 1; i++)
//		v.push_back('B' + i);
//	for (int i = 0; i < numOfGames; i++) {
//		numOfMovesPerGame[i] %= (numOfAllPlayers - 1);
//		sulnum += numOfMovesPerGame[i];
//		if (sulnum < 0)
//			sulnum = numOfAllPlayers - 1 + sulnum;
//		else if (sulnum > numOfAllPlayers - 2)
//			sulnum = sulnum - numOfAllPlayers +1;
//		if (isquick(v[sulnum], numOfQuickPlayers, namesOfQuickPlayers))
//			cnt[cur_sul]++;
//		else {
//			char save = 'A' + cur_sul;
//			cur_sul = v[sulnum] - 'A';
//			cnt[cur_sul]++;
//			v[sulnum] = save;
//		}
//	}
//	for (int i = 0; i < numOfAllPlayers - 1; i++)
//		cout << v[i] << " " << cnt[v[i] - 'A'] << endl;
//	char p = cur_sul + 'A';
//	cout << p << " " << cnt[cur_sul] << endl;
//}
//
//struct input_data {
//	int numOfAllPlayers;
//	int numOfQuickPlayers;
//	char *namesOfQuickPlayers;
//	int numOfGames;
//	int *numOfMovesPerGame;
//};
//
//void process_stdin(struct input_data& inputData) {
//	string line;
//	istringstream iss;
//
//	getline(cin, line);
//	iss.str(line);
//	iss >> inputData.numOfAllPlayers;
//
//	getline(cin, line);
//	iss.clear();
//	iss.str(line);
//	iss >> inputData.numOfQuickPlayers;
//
//	getline(cin, line);
//	iss.clear();
//	iss.str(line);
//	inputData.namesOfQuickPlayers = new char[inputData.numOfQuickPlayers];
//	for (int i = 0; i < inputData.numOfQuickPlayers; i++) {
//		iss >> inputData.namesOfQuickPlayers[i];
//	}
//
//	getline(cin, line);
//	iss.clear();
//	iss.str(line);
//	iss >> inputData.numOfGames;
//
//	getline(cin, line);
//	iss.clear();
//	iss.str(line);
//	inputData.numOfMovesPerGame = new int[inputData.numOfGames];
//	for (int i = 0; i < inputData.numOfGames; i++) {
//		iss >> inputData.numOfMovesPerGame[i];
//	}
//}
//
//int main() {
//	struct input_data inputData;
//	process_stdin(inputData);
//
//	solution(inputData.numOfAllPlayers, inputData.numOfQuickPlayers, inputData.namesOfQuickPlayers, inputData.numOfGames, inputData.numOfMovesPerGame);
//	return 0;
//}