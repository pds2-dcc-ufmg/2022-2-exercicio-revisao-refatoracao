#ifndef PIZZA_H
#define PIZZA_H

#include "produto.hpp"

#include <iostream>

class Pizza: public Produto {
  private:
    int _pedacos;

    bool _borda_recheada;

    std::string _sabor;
  public:
    Pizza(int quantidade, float valor_unitario, int pedacos, 
      bool borda_rech, std::string sabor);
      
    std::string get_sabor();
    
    virtual void print() override;
};

#endif