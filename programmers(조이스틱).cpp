//#include <string>
//#include <vector>
//using namespace std;
//int arr[26] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//int solution(string name) {
//	int len = name.size();
//	int answer = 0, cur = 0;
//	for (int i = 0; i < len; i++) {
//		answer += arr[name[cur] - 'A'];
//		name[cur] = 'A';
//		int l, r;
//		for (int j = 1; j < len; j++) {
//			if (cur - j >= 0) l = cur - j;
//			else l = len + cur - j;
//			if (cur + j < len) r = cur + j;
//			else r = cur + j - len;
//			if (name[r] != 'A') {
//				cur = r;
//				answer += j;
//				break;
//			}
//			if (name[l] != 'A') {
//				cur = l;
//				answer += j;
//				break;
//			}
//		}
//	}
//	return answer;
//}