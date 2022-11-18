#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>

using namespace std;

class Produto{
    private:
        int quantidade;
        float valor_unitario;

    public:
        Produto(int quantidade, float valor_unitario);
        
        virtual void print();

        int get_quantidade();
        float get_valor_unitario();  
};

#endif