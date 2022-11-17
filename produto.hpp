#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
#include <iostream>
#include <list>
#include <string>
#include <iostream>
using namespace std;

class Produto{
    int q;

    protected:
        float valor_unitario;

    public:
        Produto(int q, float valor_unitario);
        int get_q();
        float get_valorU();
        virtual void print() = 0;
        virtual ~Produto();

};


#endif