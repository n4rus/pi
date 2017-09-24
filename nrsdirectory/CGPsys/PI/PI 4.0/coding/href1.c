#include <stdio.h>
#include <stdlib.h>

#define MAX_LEN 320
#define SHELLSCRIPT "\n\
touch l.html \n\
\n\
"

//int main (int argc, char *argv[]) {
int main () {
	char a_word[MAX_LEN];
	char a_link[MAX_LEN];

	system(SHELLSCRIPT);

	printf ("Enter a word: \n");
	scanf ("%s", a_word);

	printf ("Enter a link: \n");
	scanf ("%s", a_link);

	printf("Your word and link: \n");

	FILE * fp;
	//fp = fopen("l.html", "w+"); w+ creates a file to write and read
        //a appends to a file
        fp = fopen("l.html", "a");
        fprintf(fp, "<p><a href=\"%s\">%s</a></p> \n", a_link, a_word);
        printf("<p><a href=\"%s\">%s</a></p> \n", a_link, a_word);
	fclose(fp);
	
        return (0);
}
