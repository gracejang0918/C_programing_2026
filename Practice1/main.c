#include <stdio.h>
#include <string.h>

int main() {

	printf("enter English sentence : ");
	if (fgets(str, sizeof(str), stdin) == NULL) {
		return 1;
	}

	str[strcspn(str, "\n")] = '\0';
	printf("result : ");

	for (char* p = str; *p != '\0'; p++) {
		if (*p >= 'A' && *p <= 'Z') {
			printf("%c", *p);
			continue;
		}
		*p -= 32;
		printf("%c", *p);
	}

	printf("number: %d");

	return 0;
}