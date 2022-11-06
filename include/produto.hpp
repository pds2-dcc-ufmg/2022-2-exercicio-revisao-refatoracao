#ifndef PRODUTO_H
#define PRODUTO_H
class Produto{
    public:
        Produto(int quantidade, float valor_unitario);
        virtual void print();
        int get_quantidade();
        float get_valor_unitario();
        void set_valor_unitario(float valor_unitario);

    private:
        int _quantidade;
        float _valor_unitario;
};

#endif