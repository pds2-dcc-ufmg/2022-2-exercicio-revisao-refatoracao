#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
    
    private:
        int _quantidade;
        float _valorUnitario;
    
    public:
        Produto(int quantidade, float valorUnitario);
        virtual ~Produto();
        
        virtual void print() = 0;
        int getQuantidade();
        float getValorUnitario();
};

#endif