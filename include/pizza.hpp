#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"
#include <string>
#include <iostream>

using namespace std;

class Pizza: public Produto {
    private:
        int _pedacos; 
        bool _borda_recheada; 
        string _sabor; 
    
    public:
        Pizza(int, float, int, bool, string); 
        string get_sabor();
        int get_pedacos(); 
        bool get_borda_recheada(); 
        void print() override;
};

#endif