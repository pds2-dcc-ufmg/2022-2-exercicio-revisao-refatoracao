#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    private:
        int _quantidade;
        float _valorUnitario;

    public:
        Produto(int quantidade, float valorUnitario);

        int get_quantidade();
        float get_valorUnitario();

        virtual void print();
};

#endif