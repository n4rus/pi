#include<iostream>
#include<cmath>

using namespace std;

void work(float x1, float x2, float & x3){
  //work = energy / time
  //w = e / t
  float w, f, t;
  f = x1;
  t = x2;
  w = f * t;
  x3 = w;
}

void cost(float y1, float y2, float & x3){
  //total_cost = (energy / time) * (cost*time);
  //tc = (e / t) * (c * t)
  float w, f, t, c, tc;
  c = y1;
  t = y2;
  tc = (f / t) * (c * t);
  x3 = tc;
}

main(){
  float w, c, f, t;
  cout << "Type the force needed(force/h): ";
  cin >> f;
  cout << "Type the time(h): ";
  cin >> t;
  cout << "Type the human effort hourly cost(R$): ";
  cin >> c;
  work(f, t, w);
  cost(f, t, c);
  cout << "work = " << w << " newtons" << endl;
  cout << "cost = R$ " << c << endl;
}
