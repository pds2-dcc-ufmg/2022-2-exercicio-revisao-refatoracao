#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
protected:
    int _q;
    float _valorUnitario;

public:
    Produto(int q, float valor_unitario);
    virtual void print();
    int get_q();
    float get_valorUnit();
};

#endif