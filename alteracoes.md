# Alterações realizadas

- Formatação do código, para ficar mais legível e organizado
- Classes com nomes iniciados com letra maiúscula
- Ajustes nos nomes das variáveis: colocando underline para atributos de classe e colocando "is..." para variáveis booleanas
- Colocando atributos de classe como private e métodos como public, adicionando getters onde necessário
- Trocando for com iterator por um range-based for, deixando o código mais limpo e legível
- Modularização do código, separando contratos (.hpp) das implementações (.cpp)
- Organização dos arquivos
- Removendo classes PizzaCalabresa e PizzaMarguerita, agora há um parâmetro "sabor" na classe Pizza, e ela deixa de ser abstrata pois no novo escopo não é mais necessário

# SAIDA ESPERADA:

Pedido - Endereco: Rua Goitacazes n 500 apt 1609
Valor total: 402.938
Pizza de Calabresa
Quantidade: 4
Valor Unitario: 28
Pedacos: 4
Borda Recheada
Pizza de Calabresa
Quantidade: 4
Valor Unitario: 20
Pedacos: 4
Hamburguer
Quantidade: 1
Valor Unitario: 70
Tipo: X-Burguer
Artesanal
Pizza de Marguerita
Quantidade: 1
Valor Unitario: 70
Pedacos: 4
Borda Recheada
Pizza de Marguerita
Quantidade: 1
Valor Unitario: 70.938
Pedacos: 4
Borda Recheada
================================
