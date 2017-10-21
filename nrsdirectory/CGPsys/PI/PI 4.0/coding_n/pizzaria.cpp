#include <iostream>
#include <cmath>

using namespace std;

void pizza(void);
float tabela_pizza(float, float);

void bebidas(void);
float tabela_bebidas(float, float);

main(){
  
  float p, d, b, tp, tb, tt, tc;

  pizza();
  cin >> p;

  bebidas();
  cin >> b;

  cout << "Valor para o pagamento: R$ ";
  cin >> d;

  // tabela_pizza

  if ((p <= 3) and (p >= 1)){
    tp = tabela_pizza(p, d);
  }
  else
    cout << "Opção invalida." << endl;

  // tabela_bebidas
  
  if ((b <= 5) and (b >= 1)){
    tb = tabela_bebidas(b, d);
  }
  else
    cout << "Opção invalida." << endl;

  // total(bebida+pizza)

  tt = tp + tb;
  tc = (d - tt);

  if (tt < 0)    
    cout << "Saldo insuficiente, operacao cancelada." << endl;
  else
    cout << "Total = R$ " << tt << endl;
    cout << "Troco = R$ " << tc << endl;
    cout << "A pizzaria fica feliz com seu dinhei... err digo, sua presença!" << endl;
}

// pizzas

void pizza(void){
  cout << "Escolha o tamanho da pizza:" << endl;
  cout << "1: Grande  = R$ 24" << endl;
  cout << "2: Media   = R$ 18" << endl;
  cout << "3: Pequena = R$ 14" << endl;
}

float tabela_pizza(float p, float d){

  float pq, m, g, t;

  t = 0;

  pq = 14.00;     // pequena
   m = 18.00;     // media
   g = 24.00;     // grande
  
  if (p == 1){
    t = t + g;
    if (d > t)
      cout << "Pizza = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }

  if (p == 2){
    t = t + m;
    if (d > t)
      cout << "Pizza = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }

  if (p == 3){
    t = t + pq;
    if (d > t)
      cout << "Pizza = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }
  
  return t;

}

// bebidas

void bebidas(void){
  cout << "Escolha a bebida: " << endl;
  cout << "1: Soyshake                = R$ 9.50" << endl;
  cout << "2: Isprimidinha com limao  = R$ 1.50" << endl;
  cout << "3: Cafe                    = R$ 1.00" << endl;
  cout << "4: Cafe com leite          = R$ 1.50" << endl;
  cout << "5: Refri lata              = R$ 3.90" << endl; 
}

float tabela_bebidas(float b, float d){

  float ss, il, c, cl, rl, t;

  t = 0;
  
  ss = 9.50;     // soyshake
  il = 1.50;     // isprimidinha
   c = 1.00;     // cafe
  cl = 1.00;     // cafe com leite
  rl = 3.90;     // refri lata
   
  if (b == 1){
    t = t + ss;
    if (d > t)
      cout << "Bebiba = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }

  if (b == 2){
    t = t + il;
    if (d > t)
      cout << "Bebiba = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }

  if (b == 3){
    t = t + c;    
    if (d > t)
      cout << "Bebiba = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }
  
  if (b == 4){
    t = t + cl;
    if (d > t)
      cout << "Bebiba = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }

  if (b == 5){
    t = t + rl;    
    if (d > t)
      cout << "Bebiba = R$ " << t << endl;
    else
      cout << "Saldo negativo, operacao cancelada." << endl;
  }
  
  return t;

}
