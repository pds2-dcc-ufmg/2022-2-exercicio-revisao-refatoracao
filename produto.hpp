#ifndef PRODUTO_H
#define PRODUTO_H

class produto {
    public:
        int quant;
        float valorUnitario;

        produto(int quant, float valor_unitario):quant(quant), valorUnitario(valor_unitario) {}
        
        virtual void print() {}
        
};

#endif