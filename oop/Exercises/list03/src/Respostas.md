# Respostas Conceituais - Lista 3 (Sistema de Cálculo de Impostos)

**a) Por que a classe Contribuinte foi definida como abstrata?**
A classe `Contribuinte` foi definida como abstrata porque ela representa um conceito genérico no nosso sistema. Não existe um "Contribuinte" genérico no mundo real que pague impostos de forma padronizada sem ser classificado como Pessoa Física, Jurídica, etc. Portanto, a classe serve apenas como um modelo (ou contrato) para agrupar atributos comuns (`nome` e `rendaAnual`) e definir a obrigatoriedade do método `calcularImposto()`, mas ela mesma não deve ser instanciada diretamente.

**b) Em que momento o polimorfismo ocorre no programa?**
O polimorfismo ocorre no método `main` (no `ContribuinteController`), no momento em que iteramos sobre a lista de `Contribuinte` (`List<Contribuinte>`) e chamamos o método `c.calcularImposto()`. Embora a variável `c` seja do tipo `Contribuinte`, em tempo de execução o Java identifica qual é o tipo real do objeto (PessoaFisica, PessoaJuridica, Microempreendedor ou Investidor) e chama o método `calcularImposto()` específico daquela classe.

**c) Qual a vantagem de cada classe ter sua própria regra de cálculo?**
A grande vantagem é a **coesão** e o **encapsulamento das regras de negócio**. Se cada classe possui a sua própria regra, evitamos estruturas de decisão gigantescas (como vários `if/else` ou `switch` no controlador para checar o tipo de contribuinte). Isso deixa o código mais limpo, fácil de dar manutenção, e cada classe fica responsável única e exclusivamente por conhecer as suas regras de tributação (Princípio da Responsabilidade Única).

**d) Como esse modelo facilita a adição de novos tipos de contribuintes?**
O modelo facilita através do princípio de **Aberto/Fechado** (Open/Closed Principle) e do uso da herança com polimorfismo. Como demonstrado no "Desafio", para adicionar um novo tipo (por exemplo, `Investidor`), basta criar uma nova classe que herda de `Contribuinte` e implementar o método `calcularImposto()`. O resto do sistema (como a lista e o loop que processa os impostos no controlador) não precisa ser modificado, pois ele já sabe lidar com qualquer objeto que seja um `Contribuinte`.
