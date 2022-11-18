#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <iostream>
#include <string>

using namespace std;

class Hamburguer : public Produto {
  private:
    string _tipo;
    bool _artesanal;
  public:
    Hamburguer(int qtd, float valor_unitario, string tipo, bool artesanal);
    virtual void print() override;
};

#endif