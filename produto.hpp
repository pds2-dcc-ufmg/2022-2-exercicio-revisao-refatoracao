#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{

protected:
    int quantidade;
    float valorUnitario;

public:
    Produto(int q, float valor_unitario);
    virtual void print(){}
    int get_quantidade();
    float get_valoruni();

};

#endif