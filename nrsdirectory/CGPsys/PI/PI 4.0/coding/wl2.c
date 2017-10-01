#include <stdio.h>         //wor(l)d link
#include <stdlib.h>
#define MAX_LEN 320
#define SHELLSCRIPT "\n\
touch l.html \n\
\n\
"

char a_word[MAX_LEN];
char a_link[MAX_LEN];
char f_name[MAX_LEN];

//int main (int argc, char *argv[]) {
int main () {
	  //	char a_word[MAX_LEN];
	  //    char a_link[MAX_LEN];

          //	system(SHELLSCRIPT);

	printf ("Hello human! \n");
	printf ("Enter the file name: \n");
	scanf ("%s", f_name);
	
	int c, l, a;

	l = 0; //loop count, file name
	a = 0; //while count index
	c = 0; //while count index of a
	
	while (c < 3) {

        printf ("Enter a word: \n");
	scanf ("%s", a_word);
	
	printf ("Enter a link: \n");
	scanf ("%s", a_link);

	FILE * fp;
	//fp = fopen("l.html", "w+"); w+ creates a file to write and read
        //a appends to a file
        fp = fopen(f_name, "a");
        fprintf(fp, "<p>%i.%i. <a href=\"%s\">%s</a></p> \n", a, c, a_link, a_word);
	fclose(fp);
	
	printf("Your word and link: are stored in %s as: \n", f_name);
        printf("<p>%i.%i. <a href=\"%s\">%s</a></p> \n", a, c, a_link, a_word);
	
	c = c + 1;
	l = l + 1;

	if (c >= 3) {
       	  a = a + 1;
	  c = 0;
	}
	}
        return (0);
}
