#include <stdio.h>
#include <string.h>

int main() {

	char str[100] = { 0 };
	int count = 0;
	printf("enter English sentence : ");
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}

	str[strcspn(str, "\n")] = '\0';
	printf("result : ");

	for (char* p = str; *p != '\0'; p++) {
		if (*p >= 'A' && *p <= 'Z') {
			printf("%c", *p);
			count++;
			continue;
		}
		else if (*p != ' ') {
			*p -= 32;
			printf("%c", *p);
			count++;
		}
		else printf(" ");
	}
	printf("\n");

	printf("number: %d",count);

	return 0;
}