#include <iostream>
#include <string.h>
#pragma warning(disable:4996)
using namespace std;
int main() {
	while (1) {
		char s[256];
		gets_s(s, sizeof(s));
		if (s[0] != '#') {
			int cnt = 0;
			for (auto c : s) 
				if (c == 'a' || c == 'A'
					|| c == 'o' || c == 'O'
					|| c == 'e' || c == 'E'
					|| c == 'i' || c == 'I'
					|| c == 'u' || c == 'U')cnt++;
			cout << cnt << endl;
		}
		else break;
	}


	return 0;
}