#include <stdio.h>
#include <math.h>
#include <stdlib.h> //for shell scripting

double t, n;

#define SHELLSCRIPT "\
#/bin/bash \n\
echo -e \"Test = True\" \n\
ping 192.168.25.1 \n\
"

 int main() {
   //printf ("Test = True");
   //system(SHELLSCRIPT);
   t = 1;
   while (t < 9) {
     printf("Test loop = ?");
     system(SHELLSCRIPT);
     printf ("Excho");
     t = t + 1;
  return 0;
 }
   return 0;
 }
   //wget \"http://n4rus.com\"
