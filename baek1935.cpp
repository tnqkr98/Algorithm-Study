// https://www.acmicpc.net/problem/1935
// 백준 1935번 : 후위표기식2 (Postfix)
// 관련 알고리즘 : Stack

#include <iostream>
#include <stack>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
int arr[27];
int main() {
	int n,i,flag= 0;
	double num1,num2;
	char s[102];
	stack<double> ans;
	stack<pair<char,int>> op;
	scanf("%d", &n);scanf("%s", s);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (i = strlen(s) - 1; i >= 0; i--) {
		if (s[i] < 'A') 
			op.push(make_pair(s[i], 0));
		else if (s[i] >= 'A') {
			ans.push(arr[s[i] - 'A']);
			op.top().second++;
			while (op.top().second == 2){
				num1 = ans.top(); ans.pop();
				num2 = ans.top(); ans.pop();
				if (op.top().first == '+')
					ans.push(num1 + num2);
				else if (op.top().first == '-')
					ans.push(num1 - num2);
				else if (op.top().first == '*')
					ans.push(num1 * num2);
				else if (op.top().first == '/')
					ans.push(num1 / num2);
				
				op.pop();
				if (!op.empty())
					op.top().second++;
				else
					break;
			} 
		}
	}
	printf("%.2lf", ans.top());
	return 0;
}