#ifndef PRODUTO_H
#define PRODUTO_H

class produto{
    protected:
        int _quantidade;
        float _valorUnitario;
        
    public:
        produto(int quantidade, float valor_unitario);
        virtual void print() = 0;
        int getQuantidade();
        float getValorUnitario();

};

#endif