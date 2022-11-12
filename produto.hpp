#ifndef PRODUTO_H
#define PRODUTO_H
class Produto
{
private:
    int _q;
    float valorUnitario;

public:
    Produto(int q, float valor_unitario);
    virtual void print() {}
    int get_q();
    float get_valorUnitario();
};

#endif