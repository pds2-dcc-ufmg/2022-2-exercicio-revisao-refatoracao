#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

class Hamburguer: public Produto{
    public:
        Hamburguer(int quantidade, float valor_unitario, string tipo_burger, bool artesanal);
        virtual void print_info() override;
        string getTipoBurguer();
        bool getArtesanal();

    private:
        string _tipo_burger;
        bool _artesanal;
        const float _TAXA_ARTESANAL = 2.0;
};

#endif