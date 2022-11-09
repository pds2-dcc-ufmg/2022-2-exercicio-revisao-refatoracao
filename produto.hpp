#ifndef PRODUTO_H
#define PRODUTO_H
class Produto{
protected:
    int quantidade;
    float valor_unitario;
public:
        Produto(int quantidade, float valor_unitario);// inicializa q e inicializa valor unitario
        virtual void print(){}
        int get_quantidade();
        float get_valor_unitario();
};

#endif