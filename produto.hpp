#ifndef PRODUTO_H
#define PRODUTO_H

#include <list>
#include <string>
#include <iostream>

using namespace std;

class produto{
    private:
        int quantidade;
        float _valor_unitario;
    public:
        produto();
        produto(int _quantidade, float valor_unitario);
        virtual void print()=0;
        int get_quantidade();
        float get_valor_unitario();
};

#endif