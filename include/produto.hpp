#ifndef PRODUTO_H
#define PRODUTO_H
class Produto {
  protected:
    int _qtd;
    float _valor_unitario;
  public:
    Produto(int qtd, float valor_unitario);
    virtual void print() = 0;
    int get_qtd();
    float get_valor_unitario();
};

#endif