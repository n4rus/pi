#include <stdio.h>

#define MAX_LEN 320

//int main (int argc, char *argv[]) {
int main () {
	char a_word[MAX_LEN];
	char a_link[MAX_LEN];

	printf ("Enter a word, and a link: ");
	scanf ("%s", a_word);
	scanf ("%s", a_link);
	printf ("You entered: %s, %s \n", a_word, a_link);
		printf("Your word and link:");
		printf("<a href=\"%s\">%s</a> \n", a_link, a_word);

/*
	printf ("Enter a link: ");
	scanf ("%s", a_link);
	printf ("You entered: %s \n", a_link);
	if (a_link != NULL) {
                printf("Your word and link:");
                printf("<a href=\"%s\">%s</a> \n", a_link, a_word);

	}
*/		
	return 0;
}
