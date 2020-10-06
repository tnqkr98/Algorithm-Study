#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;
int arr[100001],cnt;
bool check[100001];	// 사이클인지 아닌지 확인여부
bool visit[100001];	// 방문여부

void dfs(int now) {
	int next = arr[now];
	visit[now] = 1;
	if (!visit[next]) dfs(next);
	else if (!check[next]) {
		for (int i = next; i != now; i = arr[i]) 
			cnt++;
		cnt++;
	}
	check[now] = 1;
}

int main() {
	int t,n;
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> t;
	while(t--){
		cnt = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			int num;
			cin >> num;
			arr[j + 1] = num;
		}
		
		for (int j = 1; j <= n; j++)
			if (!visit[j])
				dfs(j);

		cout <<n- cnt<<endl;
		memset(visit, 0, sizeof(visit));
		memset(check, 0, sizeof(check));
	}
	return 0;
}