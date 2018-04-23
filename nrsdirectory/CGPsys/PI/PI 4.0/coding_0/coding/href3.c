#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_LEN 320
/*
#define SHELLSCRIPT "\
./href3 > list.html \n\
"*/

//int main (int argc, char *argv[]) {

int main () {
char a_word[MAX_LEN];
char a_link[MAX_LEN];
char al[MAX_LEN];

printf ("Digite o nome: ");
scanf ("%s", a_word);

printf ("Cole o link: ");
scanf ("%s", a_link);

printf("Your word and link:");
printf("<a href=\"%s\">%s</a> \n", a_link, a_word);
//system(SHELLSCRIPT);
        
return 0;
}
