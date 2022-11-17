#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <iostream>
#include <string>

using namespace std;

class Pizza : public Produto {
  private:
    int _pedacos;
    bool _borda_recheada;
  public:
    Pizza(int q, float valor_unitario, int pedacos, bool borda_rech) : Produto(q, valor_unitario), pedacos(pedacos), borda_recheada(borda_rech) {}
    int pedacos;
    virtual string get_sabor() = 0;
    virtual void print() override {
      cout << "Pizza de " << get_sabor() << endl;
      cout << "\tQuantidade: " << q << endl;
      cout << "\tValor Unitario: " << valorUnitario << endl;
      cout << "\tPedacos: " << pedacos << endl;
      if (borda_recheada)
        cout << "\tBorda Recheada" << endl;
    }
    bool borda_recheada;
};

#endif