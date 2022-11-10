#ifndef PRODUTO_H
#define PRODUTO_H

class Produto{

    private:

    float _valor_unitario;
    int _quantidade;
    
    public:
         
        Produto(int quantidade, float valor_unitario): _quantidade(quantidade), _valor_unitario(valor_unitario) {}
        
        virtual void print_info() {}

        float get_valor_unitario() { return this->_valor_unitario; }
        int get_quantidade() { return this->_quantidade; }

};

#endif