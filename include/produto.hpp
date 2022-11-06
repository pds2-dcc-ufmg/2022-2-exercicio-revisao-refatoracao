#ifndef PRODUTO_H
#define PRODUTO_H
class Produto{
    public:
        Produto(int quantidade, float valor_unitario);
        int get_quantidade();
        float get_valor_unitario();
        virtual void print();

    private:
        int _quantidade;
        float _valor_unitario;
};

#endif