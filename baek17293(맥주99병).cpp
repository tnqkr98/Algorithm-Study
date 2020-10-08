#include <cstdio>
#pragma warning(disable:4996)
int main() {
	int n,i;
	scanf("%d", &n);
	i = n;
	while (n>2&&i--) {
		printf("%d bottles of beer on the wall, %d bottles of beer.\n",i+1,i+1);
		printf("Take one down and pass it around, %d bottles of beer on the wall.\n\n", i);
		if (i == 2) break;
	}
	if (n >= 2) {
		printf("2 bottles of beer on the wall, 2 bottles of beer.\n");
		printf("Take one down and pass it around, 1 bottle of beer on the wall.\n\n");
	}
	printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
	printf("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
	printf("No more bottles of beer on the wall, no more bottles of beer.\n");
	if(n>1)
		printf("Go to the store and buy some more, %d bottles of beer on the wall.",n);
	else
		printf("Go to the store and buy some more, %d bottle of beer on the wall.", n);
	return 0;
}