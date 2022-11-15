#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    private:
    int _q;
    float _valorUnitario;

    public:
    Produto(int q, float valor_unitario);
    int get_q();
    virtual ~Produto();
    float get_valorUnitario();
    virtual void print(){}
    
};

#endif