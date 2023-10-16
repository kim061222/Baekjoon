#include<stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int arr[1055][1055] = { {0,}, {0,} };
	int ps_arr[1055][1055] = { {0,}, {0,} };

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			scanf("%d", &arr[i][j]);
			ps_arr[i][j] = ps_arr[i - 1][j] + ps_arr[i][j - 1] - ps_arr[i - 1][j - 1] + arr[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		int a, b, c, d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		printf("%d\n", ps_arr[c][d] - ps_arr[a - 1][d] - ps_arr[c][b - 1] + ps_arr[a - 1][b - 1]);
	}
}