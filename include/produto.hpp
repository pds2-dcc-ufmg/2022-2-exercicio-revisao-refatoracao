#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
        int q;

        float valorUnitario;

    public:
        Produto(int q, float valor_unitario);

        virtual void print()=0;

        float get_valor();

        int get_q();
};

#endif