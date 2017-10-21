#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 2048

void cfile(int i);

int main(){
  int n, i1;
  printf("Enter the number of loops: /n");
  //scanf("%i", n);
  n = 9;
  i1 = n;
  cfile(i1);
}

void cfile(int i){
  int l, f, lf, a, fn;
  l = 0;
  while (l < i){
    char f_name[MAX_LEN] = "cf";
    lf = l + '0';
    fn = (int)f_name;
    a = lf + fn + '0';
       
    //FILE * fp; 
    //fp = fopen(ff, "w+");
    printf("This is file n %i, named: %i", l, a);
    //fprintf(fp, "This is file n %i, named: %s", l, f_name);
    //fclose(fp);
    l = l + 1;
  }
}
