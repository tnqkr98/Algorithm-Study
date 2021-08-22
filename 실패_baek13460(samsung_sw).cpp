//#include <iostream>
//#include <queue>
//using namespace std;
//class RCC {
//public:
//	int row, col, cnt, brow, bcol;
//	RCC(int r, int c, int count,int bro,int bco) {
//		row = r;
//		col = c;
//		cnt = count;
//		brow = bro;
//		bcol = bco;
//	}
//};
//int n, m,br,bc,check[11][11] ={0},glo_min = 11,his =0,loop =0;
//char a[11][11];
//queue<RCC> q;
//
//int bluePos(int dir,int rr,int rc) { // return 0 : Blue in the hole
//	int i, j;
//	a[br][bc] = '.';
//	switch (dir)
//	{
//	case 1: //left
//		for (i = bc-1; i >= 0; i--)
//			if (a[br][i] == '#' || i == rc) {
//				bc = i + 1;
//				break;
//			}
//			else if (a[br][i] == 'O') 
//				return 0;	
//		break;
//	case 2: //right
//		for (i = bc+1; i <= m; i++)
//			if (a[br][i] == '#' || i == rc) {
//				bc = i - 1;
//				break;
//			}
//			else if (a[br][i] == 'O')
//				return 0;
//		break;
//	case 3: //up
//		for (i = br - 1; i >= 0; i--)
//			if (a[i][bc] == '#' || i == rr) {
//				br = i + 1;
//				break;
//			}
//			else if (a[i][bc] == 'O')
//				return 0;
//		break;
//	case 4: //down
//		for (i = br + 1; i <= n; i++)
//			if (a[i][bc] == '#' || i == rr) {
//				br = i - 1;
//				break;
//			}
//			else if (a[i][bc] == 'O')
//				return 0;
//		break;
//	}
//	a[br][bc] = 'B';
//	return 1;
//}
//
//void bfs() {
//	loop++;
//	int r, c,cnt,i,j,save_br,save_bc;
//	bool stall = true;
//	if ((glo_min >= 11 && q.empty()) || loop>50 )
//		return;
//	r = q.front().row;
//	c = q.front().col;
//	cnt = q.front().cnt;
//	save_br = br = q.front().brow;
//	save_bc = bc = q.front().bcol;
//	a[r][c] = '.';
//	check[r][c] = 1;
//	q.pop();
//	if ((a[r][c - 1] == '.' || a[r][c - 1] == 'O') && check[r][c - 1] == 0) {
//		stall = false;
//		for (i = c - 1; i >= 0; i--)
//			if (a[r][i] == 'O') {
//				if (cnt + 1 < glo_min && bluePos(1, -1, -1))
//					glo_min = cnt + 1;
//				return;
//			}
//			else if (a[r][i] == '.') {
//				check[r][i] = 1;
//				continue;
//			}
//			else if (a[r][i] == 'B' || a[r][i] == '#') {
//				if (bluePos(1, r, i + 1))
//					q.push(RCC(r, i + 1, cnt + 1, br, bc));
//				break;
//			}
//	}
//	a[save_br][save_bc] = 'B';
//	if ((a[r][c + 1] == '.' || a[r][c + 1] == 'O') && check[r][c + 1] == 0) {
//		stall = false;
//		for (i = c + 1; i <= m; i++)
//			if (a[r][i] == 'O') {
//				if (cnt + 1 < glo_min && bluePos(2, -1, -1))
//					glo_min = cnt + 1;
//				return;
//			}
//			else if (a[r][i] == '.') {
//				check[r][i] = 1;
//				continue;
//			}
//			else if (a[r][i] == 'B' || a[r][i] == '#') {
//				if (bluePos(2, r, i - 1))
//					q.push(RCC(r, i - 1, cnt + 1, br, bc));
//				break;
//			}
//	}
//	a[save_br][save_bc] = 'B';
//	if ((a[r-1][c] == '.' || a[r-1][c] == 'O') && check[r-1][c] == 0) {
//		stall = false;
//		for (i = r - 1; i >= 0; i--) {
//			if (a[i][c] == 'O') {
//				if (cnt + 1 < glo_min && bluePos(3,-1,-1))
//					glo_min = cnt + 1;
//				return;
//			}
//			else if (a[i][c] == '.') {
//				check[i][c] = 1;
//				continue;
//			}
//			else if (a[i][c] == 'B' || a[i][c] == '#') {
//				if(bluePos(3,i+1,c))
//					q.push(RCC(i + 1, c, cnt + 1,br,bc));
//				break;
//			}
//		}
//	}
//	a[save_br][save_bc] = 'B';
//	if ((a[r+1][c] == '.' || a[r+1][c] == 'O') && check[r+1][c] == 0) {
//		stall = false;
//		for (i = r + 1; i <= n; i++) {
//			if (a[i][c] == 'O') {
//				if (cnt + 1 < glo_min && bluePos(4,-1,-1))
//					glo_min = cnt + 1;
//				return;
//			}
//			else if (a[i][c] == '.') {
//				check[i][c] = 1;
//				continue;
//			}
//			else if (a[i][c] == 'B' || a[i][c] == '#') {
//				if(bluePos(4,i-1,c))
//					q.push(RCC(i - 1, c, cnt + 1,br,bc));
//				break;
//			}
//		}
//	}
//
//	if (stall){
//		his = 1;
//		a[r][c] = 'R';
//		if (a[br][bc - 1] == '.')
//			bluePos(1, -1, -1);
//		else if (a[br][bc + 1] == '.')
//			bluePos(2, -1, -1);
//		else if (a[br-1][bc] == '.')
//			bluePos(3, -1, -1);
//		else if (a[br + 1][bc] == '.')
//			bluePos(4, -1, -1);
//		q.push(RCC(r, c, cnt+1, br, bc));
//	}
//	bfs();
//}
//int main() {
//	int rr, rc;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//			if (a[i][j] == 'B') { br = i; bc = j; }
//			if (a[i][j] == 'R') { rr = i; rc = j; }
//		}
//	q.push(RCC(rr,rc,0,br,bc));
//	bfs();
//	if (glo_min < 11) {
//		if (his)
//			cout << glo_min - 1;
//		else
//			cout << glo_min;
//	}
//	else
//		cout << "-1";
//	return 0;
//}