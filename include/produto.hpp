#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
    private:
        int _quantidade;
        float _preco;

    public:
        Produto(int quant, float preco);
        virtual ~Produto() {}

        int get_quant();
        float get_preco();
        virtual void print_info(){}  
};

#endif