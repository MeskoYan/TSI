# Respostas Conceituais - Lista 4 (Sistema de Ordem de Serviço)

**a) Por que Servico é uma classe abstrata?**
A classe `Servico` é abstrata porque ela representa um conceito genérico no nosso sistema. Não existe um "Servico" solto na vida real que possa ter seu custo calculado sem sabermos se é de Hardware ou Software. Portanto, ela serve apenas como um modelo (ou contrato) para agrupar atributos comuns (`id`, `descricaoProblema` e `horas`) e definir a obrigatoriedade do método `calcularCusto()`, mas não deve ser instanciada diretamente.

**b) Por que calcularCusto() é abstrato?**
O método `calcularCusto()` é abstrato porque cada tipo de serviço (Hardware ou Software) possui uma regra própria e diferente para o cálculo de seu custo. Ao defini-lo como abstrato na superclasse, nós garantimos que todas as subclasses sejam obrigadas a fornecer as suas próprias implementações da lógica de preço, sem precisar criar uma implementação inútil ou genérica em `Servico`.

**c) Onde ocorre o polimorfismo?**
O polimorfismo ocorre na classe principal (`ServicoController`), dentro do loop `for`, quando iteramos a lista de serviços (`List<Servico>`) e chamamos o método `s.calcularCusto()`. Embora a variável `s` seja declarada como do tipo pai (`Servico`), durante a execução do programa o Java identifica a qual subclasse aquele objeto realmente pertence (`Hardware`, `Software` ou `Rede`) e invoca o método calcularCusto() correspondente daquela classe específica.

**d) Por que podemos utilizar List<Servico> para armazenar os dois tipos de ordem?**
Podemos fazer isso graças ao conceito de herança e _Upcasting_. Como tanto `Hardware` quanto `Software` herdam de `Servico`, todo objeto gerado por essas subclasses também "é um" `Servico`. Dessa maneira, o Java permite agrupar objetos de diferentes subclasses (que derivam do mesmo tipo base) dentro de uma mesma coleção parametrizada com o tipo da classe mãe.

**e) O que acontece quando calcularCusto() é chamado para uma Hardware e para uma Software?**
Quando o método é chamado para um objeto do tipo `Hardware`, a JVM executa a regra específica sobrescrita na classe `Hardware` (multiplicando as horas por 50 e somando o valor da peça). Quando o mesmo método é invocado para um objeto do tipo `Software`, é executada a regra específica dessa classe (multiplicando as horas por 80 e somando o valor da licença). Ou seja, cada objeto sabe como processar o seu próprio cálculo de forma independente, comportamento possibilitado pelo polimorfismo.

