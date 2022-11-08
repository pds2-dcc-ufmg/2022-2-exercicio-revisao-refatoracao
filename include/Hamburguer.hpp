#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include <iostream>
#include <string>

#include "Produto.hpp"

using namespace std;

class Hamburguer : public Produto {
   private:
    string _tipo;
    bool _is_artesanal;

   public:
    Hamburguer(int quantidade, float valor_unitario, string tipo, bool is_artesanal);

    virtual void print() override;

    string getTipo();

    bool isArtesanal();
};

#endif