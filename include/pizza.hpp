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
  Pizza(int q, float valor_unitario, int pedacos, bool borda_recheada);
  virtual string get_sabor() = 0;
  virtual void print() override;
};

#endif