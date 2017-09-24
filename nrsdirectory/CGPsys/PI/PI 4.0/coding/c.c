#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define SHELLSCRIPT "\
./href1 \n\
\
"

int main () {
	printf("Here we go!");
	system(SHELLSCRIPT);
	return 0;
}
