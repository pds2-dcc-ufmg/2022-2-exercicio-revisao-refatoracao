#ifndef PRODUTO_H
#define PRODUTO_H
class Produto {
  private:
    int _q;
  protected:
    float _valor_unitario;
  public:
    int q;
    Produto(int q, float valor_unitario) : q(q), valorUnitario(valor_unitario) {}
    virtual void print() {}
    float valorUnitario;
};

#endif