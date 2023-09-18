#include<stdio.h>
#include<string.h>

int main() {
	char cro[100];
	scanf("%s", cro);
	int an = strlen(cro);
	for (int i = 0; i < strlen(cro); i++) {
		if (cro[i] == '=') {
			if (cro[i - 1] == 'c') an--;
			if (cro[i - 1] == 's') an--;
			if (cro[i - 1] == 'z') {
				if (cro[i - 2] == 'd') an--;
				an--;
			}
		}
		if (cro[i] == '-') {
			if (cro[i - 1] == 'c') an--;
			if (cro[i - 1] == 'd') an--;
		}
		if (cro[i] == 'j') {
			if (cro[i - 1] == 'l') an--;
			if (cro[i - 1] == 'n')an--;
		}
	}
	printf("%d", an);
}