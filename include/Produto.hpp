#ifndef PRODUTO_H
#define PRODUTO_H

class Produto {
   private:
    int _quantidade;
    float _valor_unitario;

   public:
    Produto(int quantidade, float valor_unitario) : _quantidade(quantidade), _valor_unitario(valor_unitario) {}

    virtual void print() = 0;

    int getQuantidade() {
        return _quantidade;
    }

    float getValorUnitario() {
        return _valor_unitario;
    }
};

#endif