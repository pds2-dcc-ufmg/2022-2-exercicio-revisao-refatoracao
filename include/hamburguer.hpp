#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>

class Hamburguer: public Produto{
    public:
        Hamburguer(int quantidade_hamburguer, float valor_unitario, string tipo, bool artesanal);
        virtual void print() override;

        string get_tipo;
        bool get_artesanal;

        
    
    private:
        bool _artesanal;
        string _tipo;        

};

#endif