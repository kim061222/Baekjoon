#include<stdio.h>

int main() {
	int k, d, D;
	scanf("%d", &k);
	scanf("%d %d", &d, &D);
		float m = (d - D) / 2;
		float h = k * k - m * m;
		printf("%f", h);
}