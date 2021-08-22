//#include <iostream>
//#include <queue>
//using namespace std;
//int n, m, gmin = 11, loop = 0;
//char a[11][11];
//int check[11][11] = { 0 };
//class unit {
//public:
//	int rr, rc, br, bc, cnt;
//	unit(int rrow,int rcol,int brow,int bcol,int c) {
//		rr = rrow;
//		rc = rcol;
//		br = brow;
//		bc = bcol;
//		cnt = c;
//	}
//};
//queue<unit> q;
//void bfs() {
//	loop++;
//	int rr, rc, br, bc,cnt,i,j,rstop=0,bstop=0,find=0;
//	int nrr, nrc, nbr, nbc,ncnt;
//	if ((q.empty() && gmin <11) || loop >12)
//		return;
//	nrr = rr = q.front().rr;
//	nrc = rc = q.front().rc;
//	nbr = br = q.front().br;
//	nbc = bc = q.front().bc;
//	ncnt = cnt = q.front().cnt;
//	q.pop();
//	check[rr][rc] = 1;
//	if (a[rr][rc - 1] !='#' && a[rr][rc-1] !='B' && !check[rr][rc - 1]){ //R ¿ÞÂÊ ºó°ø°£
//		for (i = 0;;i++){
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//		
//			if (a[rr][rc - 1 - i] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr][rc - 1 - i] != '#' && a[rr][rc-1-i] != 'B' && !rstop) {  
//				nrc = rc - 1 - i;
//				a[rr][nrc] = 'R';
//				a[rr][nrc+1] = '.';
//				check[rr][rc - 1 - i] = 1;
//			}
//			else if ((a[rr][rc - 1 - i] == '#'|| a[rr][rc-1-i] =='B') && !rstop)   //¿©±â±îÁö
//				rstop = 1;
//			
//			if (a[br][bc - 1 - i] == 'O' && !bstop)
//				return;
//			else if (a[br][bc - 1 - i] != '#' && (bc - 1 - i != nrc || rr != br) && !bstop)
//				nbc = bc - 1 - i;
//			else if (a[br][bc - 1 - i] == '#'|| (bc-1-i == nrc && br == rr) && !bstop)
//				bstop = 1;
//		}	
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrc = rc; nbc = bc;
//	a[rr][rc] = 'R'; a[br][bc] = 'B';
//	if (a[br][bc - 1] != '#' && (rc-1 == bc && rr ==br) && !check[rr][rc - 1]) { // BR ÀÇ ¿ÞÂÊ ºó°ø°£
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[br][bc - 1 - i] == 'O' && !bstop)
//				return;
//			else if (a[br][bc - 1 - i] != '#' && bc - 1 - i != nrc && !bstop)
//				nbc = bc - 1 - i;
//			else if ((a[br][bc - 1 - i] == '#' || bc - 1 - i == nrc) && !bstop)
//				bstop = 1;
//
//			if (a[rr][rc - 1 - i] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr][rc - 1 - i] != '#' && rc - 1 - i != nbc && !rstop) {
//				nrc = rc - 1 - i;
//				check[rr][rc - 1 - i] = 1;
//			}
//			else if ((a[rr][rc - 1 - i] == '#' || rc - 1 - i == nbc) && !rstop)
//				rstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	if (a[rr][rc + 1] != '#' && (rc + 1 != bc||rr !=br) && !check[rr][rc + 1]) { //R right
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[rr][rc + 1 + i] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr][rc + 1 + i] != '#' && rc + 1 + i != nbc && !rstop) {
//				nrc = rc + 1 + i;
//				check[rr][rc + 1 + i] = 1;
//			}
//			else if ((a[rr][rc + 1 + i] == '#' || rc + 1 + i == nbc) && !rstop)
//				rstop = 1;
//
//			if (a[br][bc + 1 + i] == 'O' && !bstop)
//				return;
//			else if (a[br][bc + 1 + i] != '#' && bc + 1 + i != nrc && !bstop)
//				nbc = bc + 1 + i;
//			else if ((a[br][bc + 1 + i] == '#' || bc + 1 + i == nrc) && !bstop)
//				bstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	if (a[br][bc + 1] != '#' && (rc + 1 == bc && rr == br) && !check[rr][rc + 1]) { //B right
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[br][bc + 1 + i] == 'O' && !bstop)
//				return;
//			else if (a[br][bc + 1 + i] != '#' && bc + 1 + i != nrc && !bstop)
//				nbc = bc + 1 + i;
//			else if ((a[br][bc + 1 + i] == '#' || bc + 1 + i == nrc) && !bstop)
//				bstop = 1;
//			
//			if (a[rr][rc + 1 + i] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr][rc + 1 + i] != '#' && rc + 1 + i != nbc && !rstop) {
//				nrc = rc + 1 + i;
//				check[rr][rc + 1 + i] = 1;
//			}
//			else if ((a[rr][rc + 1 + i] == '#' || rc + 1 + i == nbc) && !rstop)
//				rstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	//-------------------------------------------------------------------------------//
//	
//	if (a[rr-1][rc] != '#' && (rr - 1 != br || rc != bc) && !check[rr-1][rc]) { //R up
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//	
//			if (a[rr-1-i][rc] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr - 1 - i][rc] != '#' && rr - 1 - i != nbr && !rstop) {
//				nrr = rr - 1 - i;
//				check[rr - 1 - i][rc] = 1;
//			}
//			else if ((a[rr-1-i][rc] == '#' || rr - 1 - i == nbr) && !rstop)
//				rstop = 1;
//	
//			if (a[br-1-i][bc] == 'O' && !bstop)
//				return;
//			else if (a[br - 1 - i][bc] != '#' && br - 1 - i != nrr && !bstop)
//				nbc = bc - 1 - i;
//			else if ((a[br-1-i][bc] == '#' || br - 1 - i == nrr) && !bstop)
//				bstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	if (a[br-1][bc] != '#' && (rr - 1 == br && rc == bc) && !check[rr-1][rc]) { //B up
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[br - 1 - i][bc] == 'O' && !bstop)
//				return;
//			else if (a[br - 1 - i][bc] != '#' && br - 1 - i != nrr && !bstop)
//				nbc = bc - 1 - i;
//			else if ((a[br - 1 - i][bc] == '#' || br - 1 - i == nrr) && !bstop)
//				bstop = 1;
//			if (a[rr - 1 - i][rc] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr - 1 - i][rc] != '#' && rr - 1 - i != nbr && !rstop) {
//				nrr = rr - 1 - i;
//				check[rr - 1 - i][rc] = 1;
//			}
//			else if ((a[rr - 1 - i][rc] == '#' || rr - 1 - i == nbr) && !rstop)
//				rstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	if (a[rr + 1][rc] != '#' && (rr + 1 != br || rc != bc) && !check[rr + 1][rc]) { //R down
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[rr + 1 + i][rc] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr + 1 + i][rc] != '#' && rr + 1 + i != nbr && !rstop) {
//				nrr = rr + 1 + i;
//				check[rr + 1 + i][rc] = 1;
//			}
//			else if ((a[rr + 1 + i][rc] == '#' || rr + 1 + i == nbr) && !rstop)
//				rstop = 1;
//
//			if (a[br + 1 + i][bc] == 'O' && !bstop)
//				return;
//			else if (a[br + 1 + i][bc] != '#' && br + 1 + i != nrr && !bstop)
//				nbc = bc + 1 + i;
//			else if ((a[br + 1 + i][bc] == '#' || br + 1 + i == nrr) && !bstop)
//				bstop = 1;
//		}
//	}
//	rstop = 0; bstop = 0; find = 0;
//	nrr = rr; nrc = rc; nbr = br; nbc = bc;
//	if (a[br + 1][bc] != '#' && (rr + 1 == br && rc == bc) && !check[rr + 1][rc]) { //B down
//		for (i = 0;; i++) {
//			if (rstop && bstop) {
//				if (find && gmin > cnt + 1) {
//					gmin = cnt + 1;
//					return;
//				}
//				q.push(unit(nrr, nrc, nbr, nbc, cnt + 1));
//				break;
//			}
//			if (a[br + 1 + i][bc] == 'O' && !bstop)
//				return;
//			else if (a[br + 1 + i][bc] != '#' && br + 1 + i != nrr && !bstop)
//				nbc = bc + 1 + i;
//			else if ((a[br + 1 + i][bc] == '#' || br + 1 + i == nrr) && !bstop)
//				bstop = 1;
//
//			if (a[rr + 1 + i][rc] == 'O' && !rstop) {
//				find = 1;
//				rstop = 1;
//			}
//			else if (a[rr + 1 + i][rc] != '#' && rr + 1 + i != nbr && !rstop) {
//				nrr = rr + 1 + i;
//				check[rr + 1 + i][rc] = 1;
//			}
//			else if ((a[rr + 1 + i][rc] == '#' || rr + 1 + i == nbr) && !rstop)
//				rstop = 1;
//		}
//	}
//	bfs();
//}
//int main() {
//	int rr, rc,br,bc;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++) {
//			cin >> a[i][j];
//			if (a[i][j] == 'R') { rr = i; rc = j; }
//			if (a[i][j] == 'B') { br = i; bc = j; }
//		}
//	q.push(unit(rr, rc, br, bc, 0));
//	bfs();
//	if (gmin < 11)
//		cout << gmin;
//	else
//		cout << "-1";
//	return 0;
//}