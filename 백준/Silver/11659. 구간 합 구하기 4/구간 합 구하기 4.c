#include<stdio.h>

int main() {
	int n, m, i;
	scanf("%d %d", &n, &m);

	int arr[100100] = { 0, };
	int ps_arr[100100] = { 0, };

	for (i = 1; i <= n; i++) {
		scanf("%d", &arr[i]);
		ps_arr[i] = ps_arr[i - 1] + arr[i];
	}

	for (i = 0; i < m; i++) {
		int s, e;
		scanf("%d %d", &s, &e);
		printf("%d\n", ps_arr[e] - ps_arr[s-1]);
	}

	return 0;
}