#include <iostream>
#include <cmath>

using namespace std;

void pizza(void);
float tabela_pizza(float, float);

main(){
  float p, d;
  pipoca();
  cin >> p;
  if ((p == 1) or (p == 2)){
    cout << "Valor para o pagamento: R$ ";
    cin >> d;
    cout << "Troco = R$ " << tabela_refri(p, d) << endl;
  }
    else
      cout << "Opção invalida." << endl;
}

void pizza(void){
  cout << "Escolha o tamanho da pizza:" << endl;
  cout << "1: Grande  = R$ 24" << endl;
  cout << "2: Media   = R$ 18" << endl;
  cout << "3: Pequena = R$ 14" << endl;
}

float tabela_refri(float p, float d){

  float p, m, g, t;

  p = 14.00;     // pequena
  m = 18.00;     // media
  g = 24.00;     // grande
  
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
