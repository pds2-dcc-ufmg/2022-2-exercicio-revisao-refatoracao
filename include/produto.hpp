#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <iostream>

using namespace std;

namespace Cardapio{

    class Produto{
        private:
            int _quantidade_produto;
            float _valor_unitario;
    
        public:
            Produto(int quantidade_produto, float valor_unitario);
            virtual void print() = 0;
            virtual ~Produto(){}

            int get_quantidade_produto();
            float get_valor_unitario();
    };
}

#endif