//#include <iostream>
//#include <stack>
//#include <string.h>
//#pragma warning(disable:4996)
//using namespace std;
//int arr[27];
//int main() {
//	int n, i, flag = 0;
//	double num1, num2;
//	char s[102];
//	stack<double> ans;
//	stack<char> op;
//	scanf("%d", &n);
//	scanf("%s", s);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	for (i = strlen(s) - 1; i >= 0; i--) {
//		if (s[i] < 'A' || s[i] > 'Z') {
//			flag = 0;
//			op.push(s[i]);
//		}
//		else if (!flag && s[i] >= 'A' && s[i] <= 'Z') {
//			flag = 1;
//			ans.push(arr[s[i] - 'A']);
//		}
//		else if (flag && s[i] >= 'A' && s[i] <= 'Z') {
//			ans.push(arr[s[i] - 'A']);
//			do {
//				num1 = ans.top(); ans.pop();
//				num2 = ans.top(); ans.pop();
//				if (op.top() == '+')
//					ans.push(num1 + num2);
//				else if (op.top() == '-')
//					ans.push(num1 - num2);
//				else if (op.top() == '*')
//					ans.push(num1 * num2);
//				else if (op.top() == '/')
//					ans.push(num1 / num2);
//				op.pop();
//			} while (ans.size() > 1 && i == 0);
//		}
//	}
//	printf("%.2lf", ans.top());
//	return 0;
//}