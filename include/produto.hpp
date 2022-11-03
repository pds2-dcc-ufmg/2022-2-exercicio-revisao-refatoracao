#ifndef PRODUTO_H
#define PRODUTO_H

class Produto
{
protected:
    int _quantidade;
    float _valorUnitario;

public:
    Produto(int quantidade, float valor_unitario);
    virtual void print();
    int get_quantidade();
    float get_valorUnit();
};

#endif