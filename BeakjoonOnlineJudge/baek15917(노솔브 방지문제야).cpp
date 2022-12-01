#include <cstdio>
using namespace std;
int main() {
	int n; scanf("%d",&n);
	while (n--) {
		int a;  scanf("%d", &a);
		if ((a & (-a)) == a) printf("1\n");
		else printf("0\n");
	}
	return 0;
}