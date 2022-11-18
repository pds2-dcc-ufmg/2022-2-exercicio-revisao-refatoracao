#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>
#include <string>
using namespace std;

class Produto{
    public:
        Produto(std::string tipo, int quantidade, float valor_unitario);
        virtual void print_info();
        std::string getTipo();
        virtual int getQuantidade();
        virtual float getValor();
        void setValor(float valor);

    private: 
        std::string _tipo;
        int _quantidade;
        float _valor_unitario;
};

#endif