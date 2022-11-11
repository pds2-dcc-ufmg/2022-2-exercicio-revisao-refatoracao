#ifndef PRODUTO_H
#define PRODUTO_H


class Produto {
    public:
        Produto(int quantidade, double valor_unitario);
        
        virtual void print();

        virtual void adicionar_tarifas() = 0;

        /*Adicionado essa função para deletar corretamente as classes derivadas*/
        virtual ~Produto();

        double get_valor_unitario();

        int get_quantidade();

        void set_valor_unitario(double valor);
    
    private:
        int _quantidade;
        double _valor_unitario;
};

#endif