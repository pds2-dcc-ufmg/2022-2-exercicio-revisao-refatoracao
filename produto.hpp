#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{
    protected:
    
        int quantidade;
        int valorUnitario;
    
    public:
        
        Produto(int quantidade, float valorUunitario);
        virtual void print(){}
        int get_quantidade();
        float get_valorUnitario();
};

#endif
