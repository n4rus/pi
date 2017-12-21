#include <iostream>
#include <cmath>

using namespace std;

//light speed m/s

main(){
  double E, m, C, c;
  cout << "Energy calculator 0" << endl;
  cout << "Type the amout of mass(kg): ";
  cin >> m;
  C = 300000000;
  c = pow(C, 2);
  E = m * c;
  cout << "E = m * c²" << endl;
  cout << "E = " << m << "kg * " << c << "m/s " << endl;
  cout << "Amout of Energy = " << E << "joules" << endl;
}

