#ifndef PRODUTO_H
#define PRODUTO_H
class Produto {
  protected:
    int _q;
    float _valor_unitario;
  public:
    Produto(int q, float valor_unitario);
    virtual void print() = 0;
    int get_qtd();
    float get_valor_unitario();
};

#endif