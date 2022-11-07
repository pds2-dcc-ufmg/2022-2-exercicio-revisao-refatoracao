#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
        int _quantidade;
        float _valor_unitario;

    public:
        Produto(int quantidade, float valor_unitario);
        virtual ~Produto();

        int get_quantidade();
        float get_valor_unitario();

        virtual void print() = 0;
};

#endif