#ifndef PIZZA_H
#define PIZZA_H

#define TARIFA_BORDA_RECHEADA 1.4

#include "Produto.hpp"

#include <string>
#include <iostream>

using namespace std;


class Pizza : public Produto {
    public:
        Pizza(int quantidade, float valor_unitario, int pedacos, bool borda_rech, string sabor);

        /* get_sabor Não é mais função virtual pura pois as subclasses foram removidas, mas é virtual para se vier a ter uma nova subclasse*/
        virtual string get_sabor();

        virtual void set_sabor(string sabor); /*Adicionado essa função para melhorar a manutenção se vier uma nova classe depois*/

        virtual ~Pizza();                     

        virtual void print() override;

    private:
        int _pedacos;
        bool _borda_recheada;
        string _sabor;
};


#endif