//#include <iostream>
//#include <string>
//using namespace std;
//bool arr[26]={0};
//
//string solution(string sentence) {
//	string answer="";
//	for (int i = 'a'; i <= 'z'; i++)
//		if (sentence.find(i) != -1)
//			arr[i - 'a'] = 1;
//	for (int i = 'A'; i <= 'Z'; i++)
//		if (sentence.find(i) != -1)
//			arr[i - 'A'] = 1;
//	for (int i = 0; i < 26; i++)
//		if (!arr[i])
//			answer += ('a' + i);
//	if (answer.size() == 0)
//		answer = "perfect";
//	return answer;
//}
//
//int main() {
//	cout << solution("His comments came after Pyongyang announced it had a plan to fire four missiles near the US territory of Guam.")<<endl;
//	cout << solution("Jackdaws love my big sphinx of quartz");
//
//	return 0;
//}
