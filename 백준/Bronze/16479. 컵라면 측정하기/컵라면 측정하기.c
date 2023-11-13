#include<stdio.h>

int main() {
	double k, d, D;
	scanf("%lf", &k);
	scanf("%lf %lf", &d, &D);
	double m = (d - D) / 2;
	double h = k * k - m * m;
	printf("%g", h);
}