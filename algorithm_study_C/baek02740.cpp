//// https://www.acmicpc.net/problem/13460
//// 백준 2740 번: 행렬 회전
//// 관련알고리즘 : math
//
//#include <cstdio>
//#pragma warning(disable:4996)
//int main() {
//	int n, m, k,i,j,l;
//	int mat1[101][101], mat2[101][101], r[101][101] = { 0 };
//	scanf("%d %d", &n, &m);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++)
//			scanf("%d",&mat1[i][j]);
//	scanf("%d %d", &m, &k);
//	for (i = 0; i < m; i++)
//		for (j = 0; j < k; j++)
//			scanf("%d",&mat2[i][j]);
//	for (i = 0; i < n; i++)
//		for (j = 0; j < k; j++) 
//			for(l=0;l<m;l++)
//				r[i][j] += mat1[i][l] * mat2[l][j];
//		
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < k; j++) {
//			printf("%d",r[i][j]);
//			if (j != k - 1)
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}