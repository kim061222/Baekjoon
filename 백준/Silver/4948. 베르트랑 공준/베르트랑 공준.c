#include<stdio.h>

int main() {
	int n = 250000;
	int arr[250000] = { 1, 0, };
	for (int i = 2; i <= n; i++) {
		if (!arr[i]) {
			for (int j = i * 2; j < n + 1; j += i) {
				arr[j] = 1;
			}
		}
	}
	scanf("%d", &n);
	while (n)
	{
		int cnt = 0;
		for (int i = n + 1; i <= n * 2; i++) {
			if (!arr[i]) cnt++;
		}
		printf("%d\n", cnt);
		scanf("%d", &n);
	}
}