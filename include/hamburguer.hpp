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
    Hamburguer(int q, float valor_unitario, string tipo, bool artesanal) : Produto(q, valor_unitario), tipo(tipo), artesanal(artesanal) {}
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