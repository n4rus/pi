#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#define MAX_LEN 2048

//tl77
//var(N[n1+n2...+n(x)]+N2[...]...+N(x[])[]...+N...)   

int main () {
  char f_name[MAX_LEN];
  double N, n, x, R, r, i, I; //neNaturais xe(R, N) reR ieI  | R r i I x
  double xo, yo, vo, zo, to, dv, dt, dx, dy, dd, dn; //axys & derivatives | dd dt dx dy dd dn


  printf("Hello human! \n");                                       //wl2.c
  printf("I am a b-type program, my purpose is ... \n");           //nt.c

        //nt.c = (tl77 / (nt.c + wl2.c))
        //wl2.c :
    
        printf ("Enter the file name: \n");
        scanf ("%s.html", f_name);

	int l, a, c;

        l = 0; //loop count, file name                                                                                                 
        a = 0; //while count index                                                                                                     
        c = 0; //while count index of a                                                                                                

        while (c < 11) {

        printf ("Enter y0: \n");
        scanf ("%p", yo);

        printf ("Enter x0: \n");
        scanf ("%g", xo);

        printf ("Enter v0: \n");
        scanf ("%f", vo);

        printf ("Enter z0: \n");
        scanf ("%f", zo);

        printf ("Enter t0: \n");
        scanf ("%f", to);

        printf ("Enter N: \n");
        scanf ("%f", N);

        printf ("Enter n: \n");
        scanf ("%f", n);

        FILE * fp;
        //fp = fopen("file", "w+"); w+ creates a file to write and read                                                              
        //                   "a"); appends to a existing file                                                                                                          
        fp = fopen(f_name, "a");
        fprintf(fp, "<p>%i %i %f %f %f %f %f %f %f %f %f </p> \n", xo, yo, vo, zo, to, dv, dt, dx, dy, dn, dd);
        fclose(fp);

        printf("Your word and link: are stored in %s as: \n", f_name);
        printf( "<p>i% %i %f %f %f %f %f %f %f %f %f %f %f </p> \n", c, a, xo, yo, vo, zo, to, dv, dt, dx, dy, dn, dd);

        c = c + 1;
        l = l + 1;
  
        if (c >= 11) {
          a = a + 1;
          c = 0;
        }
        }
        return (0);


  
  
}
