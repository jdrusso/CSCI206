#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char* firstname;
	char* lastname;

	printf("Enter your name: ");
	scanf("%ms %ms", &firstname, &lastname);

	int first = strlen(firstname);
	int last = strlen(lastname);

	printf("%s %s\n", firstname, lastname);

	printf("%*s%d %*s%d\n", first-1, " ", first, last-1, " ", last);

	printf("%*s%d%*s %*s%d\n", first/2, " ", first, first/2, " ", last/2, " ", last);

	printf("%d%*s %d%*s\n", first, first-1, " ", last, last-1, " ");

	return EXIT_SUCCESS;
}