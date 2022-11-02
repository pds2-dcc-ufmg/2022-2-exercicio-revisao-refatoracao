#include "produto.hpp"

using namespace std;

Produto::Produto(int q, float valor_unitario) : _q(q), _valorUnitario(valor_unitario) {}

void Produto::print() {}

int Produto::get_q() { return _q; }

float Produto::get_valorUnit() { return _valorUnitario; }