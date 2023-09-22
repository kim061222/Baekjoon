#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main() {
	int t, n, m;
	char checkZero[7];
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &n, &m);
		int cnt = 0;
		for (int j = n; j <= m; j++) {
			sprintf(checkZero, "%d", j);
			for (int k = 0; k < strlen(checkZero); k++) {
				if (checkZero[k] == '0') {
					cnt++;
				}
			}
		}
		printf("%d\n", cnt);
	}
}