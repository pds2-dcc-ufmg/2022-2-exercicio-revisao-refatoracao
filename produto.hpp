#ifndef PRODUTO_H
#define PRODUTO_H

#include <list>
#include <string>
#include <iostream>

class produto{
    private:
        int quantidade;
        float _valor_unitario;
    public:
        produto(int _quantidade, float valor_unitario):quantidade(_quantidade), _valor_unitario(valor_unitario){}

        virtual void print(){}

        int get_quantidade(){
            return quantidade;
        }

        float get_valor_unitario(){
            return _valor_unitario;
        }
};

#endif