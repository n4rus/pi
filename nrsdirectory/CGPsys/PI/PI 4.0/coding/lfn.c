#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define last "lejs"
//also lejs
#define formula "formula"
#define n4rus "n4rus"
#define pn44 "pn44"
#define pi "pi"

/*
n4rus is an work of art by lejs;
pi is the project born from n4rus, bringing pn44 to light, 
modifying n4rus, lejs, and further on, pi and pn44 into a while loop;
the pi material is used by lejs into upgrading n4rus and pn44;

crono    = lejs=>n4rus=>pi=>pn44
exibicao = pn44=>n4rus=>pi=>lejs

i = pi;
n = n4rus;
p = pn44;
l = last;
f = formula;
*/

//char i[2], a[5], p[4], l[4], f[7];

int main () {
  char i[10] = "pi";
  char n[10] = "n4rus";
  char p[10] = "pn44";
  char l[10] = "last";
  char f[10] = "formula";
  printf("crono = %s => %s => %s => %s => %s\n", l, n, i, p, f);
  
  printf("shown = %s => %s => %s => %s => %s\n", p, n, i, l, f);
  return 0;
}
