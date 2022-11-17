#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "pizza.hpp"

class PizzaCalabresa : public Pizza {
  public:
    PizzaCalabresa(int q, float valor_unitario, int pedacos, bool borda_rech) : Pizza(q, valor_unitario, pedacos, borda_rech) {}
    virtual string get_sabor() override {
      return "Calabresa";
    }
};

#endif