#ifndef PRODUTO_H
#define PRODUTO_H


class Produto {
    public:
        Produto(int quantidade, double valor_unitario);
        
        virtual void print();

        double get_valor_unitario();

        virtual ~Produto();

        int get_quantidade();
    
    private:
        int _quantidade;
        double _valor_unitario;
};

#endif