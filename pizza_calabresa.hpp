#ifndef PIZZA_CALABRESA_H
#define PIZZA_CALABRESA_H

#include "pizza.hpp"

class pizza_calabresa : public pizza {
public:
  pizza_calabresa(int q, float valor_unitario, int pedacos, bool borda_rech) : pizza(q, valor_unitario, pedacos, borda_rech) {}
  virtual string get_sabor() override { 
		return "Calabresa"; 
	}
};

#endif