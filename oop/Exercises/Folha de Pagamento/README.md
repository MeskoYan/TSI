## Atividade 2: Folha de Pagamento 

Objetivo: Aplicar os conceitos de Herança para reaproveitamento de código e Polimorfismo para especializar o cálculo de remuneração conforme o cargo.

1. Superclasse: Funcionario 

    Atributos: nome (String) e salarioBase (Double).

    Método: calcularSalario()

Comportamento: Retorna apenas o valor contido em salarioBase.

2. Subclasse: Gerente

    Especialização: Herda de Funcionario.

    Atributo Adicional: bonus (Double).

    Polimorfismo: Sobrescreve o método calcularSalario().

Lógica: Deve retornar a soma do salarioBase + bonus.

3. Subclasse: Vendedor

    Especialização: Herda de Funcionario.

    Atributo Adicional: comissao (Double).

    Polimorfismo: Sobrescreve o método calcularSalario().

Lógica: Deve retornar a soma do salarioBase + comissao.
 
Crie uma classe Principal (Controller) que instancie um funcionário de cada tipo e mostre seus respectivos nomes e salários 