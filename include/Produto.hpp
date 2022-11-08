#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
    public:
        Produto(int q, float valor_unitario);
        
        virtual void print();

        float get_valor_unitario();

        int get_quantidade();
    
    private:
        int _quantidade;
        float _valor_unitario;
};

#endif