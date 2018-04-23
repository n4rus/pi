#include <iostream>
#include <cmath>

using namespace std;

#define g 10

double y, v, x, t, j, w, i;

main () {
  cout << "Formula: y = y0 + v0yt + 1/2gt², x = x0 + v0xt";
  cout << "Valores em order y0, v0, x0, t: ";
  cin >> y >> v >> x;
  cout << "y = " << y << ", v = " << v << ", x = " << x << ", t = " << (t = x) << endl;

  if ((y =! NULL) or (v =! NULL) or (x =! NULL ) or (t =! NULL)) {
    t = x;
    
    j = ((v * y) * t);
    
    w = t * t;

    i = ((y + j) + (1/2 * (g * w)));

    cout << "y(yvx) = " << i << endl;
  }
}
