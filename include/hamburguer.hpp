#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"

namespace Cardapio{

    class Hamburguer: public Produto{
        private:
            string _tipo;
            bool _artesanal;
    
        public:
            Hamburguer(int qtd_produto, float valor_unitario, string tipo, bool artesanal);
            virtual void print() override;
            ~Hamburguer(){}

            string get_tipo();
            bool get_artesanal();
    };
}
#endif