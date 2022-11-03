#include "produto.hpp"

using namespace std;

Produto::Produto(int quantidade, float valor_unitario) : _quantidade(quantidade), _valorUnitario(valor_unitario) {}

void Produto::print() {}

int Produto::get_quantidade() { return _quantidade; }

float Produto::get_valorUnit() { return _valorUnitario; }