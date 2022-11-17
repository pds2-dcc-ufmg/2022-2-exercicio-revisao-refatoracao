#ifndef PRODUTO_H
#define PRODUTO_H
class produto {
public:
  int q;
  produto(int q, float valor_unitario) : q(q), valorUnitario(valor_unitario) {}
  virtual void print() {}
  float valorUnitario;
};

#endif