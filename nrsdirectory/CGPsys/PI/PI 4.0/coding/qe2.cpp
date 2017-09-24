#include <iostream>
#include <cmath>

using namespace std;

#define g 10

double y, v, x, t, j, w, i, q, c;

main () {
  cout << "Formula: y = y0 + v0yt + 1/2gt², x = x0 + v0xt";
  cout << "Valores em order y0, v0, x0, t: ";
  cin >> y >> v >> x >> t;
  cout << "y0 = " << y << ", v0 = " << v << ", x0 = " << x << ", t = " << t << endl;

  if ((y - v - x) == y - v - x)
    c = g;
    
    j = ((v * y) * t);
    
    w = t * t;

    i = ((y + j) + (0.5 * (c * w)));

    cout << "Para \"y = y0 + v0yt + 1/2gt²\", y = " << ((y + j) + (0.5 * (c * w))) << endl;

    //function that relates y to x:
    //x = x0 + v0xt

    q = (i / (v * (x * t)));

    cout << "Para \" relacao entre y e x = x0 + v0xt\", y = " << (i / (v * (x * t))) << endl;

    //repairs: for functions with inputs equals 0
}
