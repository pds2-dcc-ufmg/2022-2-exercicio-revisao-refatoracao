#ifndef HAMBURGUER_H
#define HAMBURGUER_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Hamburguer: public Produto{
    private:
        string _tipo;
        bool _artesanal;
    public:
        Hamburguer(int, float, string, bool); 
        void print() override; 
        string get_tipo(); 
        bool get_artesanal(); 

};

#endif