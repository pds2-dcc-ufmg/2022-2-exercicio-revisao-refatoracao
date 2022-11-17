#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"


class hamburguer: public produto{
    private:
        bool _artesanal;
    public:
        hamburguer(int _quantidade, float valor_unitario, std::string tipo, bool artesanal): 
        produto(_quantidade, valor_unitario), _tipo(tipo), _artesanal(artesanal){}
        std::string _tipo;
        virtual void print() override{
            std::cout << "Hamburguer" << std::endl;
            std::cout << "\t" << "Quantidade: " << get_quantidade() << std::endl;
            std::cout << "\t" << "Valor Unitario: " << get_valor_unitario() << std::endl;
            std::cout << "\t" << "Tipo: " << _tipo << std::endl;
            if (_artesanal) {
                std::cout << "\t" << "Artesanal" << std::endl;
            }
        }
};

#endif