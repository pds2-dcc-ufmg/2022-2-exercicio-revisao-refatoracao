#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    public:
        int _quantidade;
        float _valor_unitario;
        
        Produto(int quantidade, float valor_unitario);
        virtual void print();

    private: 
};

#endif