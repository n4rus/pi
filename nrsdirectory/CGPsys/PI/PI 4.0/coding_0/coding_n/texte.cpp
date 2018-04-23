#include <iostream>
#include <cmath>

using namespace std;

void pipoca(void);
float tabela(float, float);

main(){
  float p, d;
  pipoca();
  cin >> p;
  if ((p == 1) or (p == 2)){
    cout << "Valor para o pagamento: R$ ";
    cin >> d;
    cout << "Troco = R$ " << tabela(p, d) << endl;
  }
    else
      cout << "Opção invalida." << endl;
}

void pipoca(void){
  cout << "Escolha o tamanho da pipoca:" << endl;
  cout << "1: Grande = R$ 15" << endl;
  cout << "2: Media  = R$ 10" << endl;
}

float tabela(float p, float d){
  float m, g, t;
  m = 10.00;
  g = 15.00;
  if (p == 1){
    if (d > g)
      t = d - g;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }
  if (p == 2){
    if (d > m)
      t = d - m;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }
  return t;
}
