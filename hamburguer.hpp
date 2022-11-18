#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"


class hamburguer: public produto{
    private:
        string _tipo;
        bool _artesanal;
    public:
        hamburguer();
        hamburguer(int _quantidade, float valor_unitario, string tipo, bool artesanal);
        virtual void print() override;
};

#endif