#include <stdio.h>

void to_hms(int total, int* h, int* m, int* s) {
	*h = total / 3600;
	*m = (total - *h*3600)/60;
	*s = total - *h * 3600 - *m * 60;
}

int main() {
	int t = 0;
	int h, m, s=0;
	printf("enter whole time : ");
	scanf_s("%d", &t);

	to_hms(t, &h, &m, &s);

	printf("%dhours %dmins %dsecs", h, m, s);

	return 0;
}