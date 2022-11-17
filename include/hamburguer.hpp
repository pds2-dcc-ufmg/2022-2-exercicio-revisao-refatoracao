#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <iostream>
#include <string>

using namespace std;

class hamburguer : public produto {
public:
  hamburguer(int q, float valor_unitario, string tipo, bool artesanal)
      : produto(q, valor_unitario), tipo(tipo), artesanal(artesanal) {}
  string tipo;
  virtual void print() override {
    cout << "Hamburguer" << endl;
    cout << "\tQuantidade: " << q << endl;
    cout << "\tValor Unitario: " << valorUnitario << endl;
    cout << "\tTipo: " << tipo << endl;
    if (artesanal)
      cout << "\tArtesanal" << endl;
  }
  bool artesanal;
};

#endif