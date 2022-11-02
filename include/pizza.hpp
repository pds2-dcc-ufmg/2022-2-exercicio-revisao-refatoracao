#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

namespace Cardapio{

    class Pizza: public Produto{
        private:
            int _quantidade_pedacos;
            bool _borda_recheada;
            string _sabor;

        public:
            Pizza(int qtd_produto, float valor_unitario, int qtd_pedacos, bool borda_recheada, string sabor);
            virtual void print() override;
            ~Pizza(){}
        
            string get_sabor();
            int get_quantidade_pedacos();
            bool get_borda_recheada();        
    };
}

#endif 