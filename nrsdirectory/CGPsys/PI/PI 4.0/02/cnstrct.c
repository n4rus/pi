#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/******************************************/
/*             Construction               */
/******************************************/
/* 
  f(ct, n){
  n = number(user_input);
  ct = cost(user_input);
  cf = ct * n;
  }
  materials = fx(), fy(), fz();
  total = fx() + fy() + fz();

  example:
  nx = 5;             metros quadrados
  ctx = 12;           reais/metro quadrado
  cfx = 5 * 12;       reais
  
  ny = 4;             metros quadrados
  cty = 10;           reais/metro quadrado
  cfy = 10 * 4;       reais

  total = cfy + cfx;
*/

void cnst(void);
void f1(void); // input to m^2 measure & store to var m2 
void f2(void); // input to m^3 measure & store to var m3
void f3(void); // show f1(operation)f2 menu
void f4(void); // call f1(operation)f2
void f(ct, fn); // input unitary price for f(n)
void total(fn, fn); // output fn + fn;

int main(){
}

void cnst(void){
  //intro, show functions, call selection
  //call user input on selection
}
