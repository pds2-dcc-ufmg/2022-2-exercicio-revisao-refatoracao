#ifndef PIZZA_MARGUERITA_H
#define PIZZA_MARGUERITA_H

#include "pizza.hpp"

class PizzaMarguerita : public Pizza {
	public:
		PizzaMarguerita(int qtd, float valor_unitario, int pedacos, bool borda_rech);
		virtual string get_sabor() override;
};

#endif