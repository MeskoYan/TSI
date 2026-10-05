# Respostas Conceituais - Lista 2

**a) Por que `calcularCusto()` é abstrato?**
Porque cada tipo de veículo (Carro, Caminhão, Ônibus) tem uma forma específica e diferente de calcular o custo de viagem. A classe abstrata `Veiculo` define o contrato (a assinatura do método), obrigando que as subclasses concretas implementem a sua própria lógica matemática para o cálculo.

**b) Por que `custoBase` é `protected`?**
O modificador `protected` permite que as subclasses (como `Carro`, `Caminhao` e `Onibus`) tenham acesso direto a esse atributo para utilizá-lo na fórmula de cálculo em seus respectivos métodos `calcularCusto()`, sem a necessidade de chamar o método `getCustoBase()`. Ao mesmo tempo, ele continua protegido contra acessos externos de classes que não estão na mesma hierarquia ou pacote.

**c) Onde ocorre o polimorfismo?**
O polimorfismo ocorre na **Classe Principal** (no caso, `VeiculoController`), no momento em que percorremos a lista `List<Veiculo>` e chamamos o método `veiculo.calcularCusto(100)`. Embora a variável seja do tipo `Veiculo`, a máquina virtual Java (JVM) decide em tempo de execução qual implementação de `calcularCusto()` deve ser chamada, baseando-se no tipo real do objeto instanciado (se é um `Carro`, `Caminhao` ou `Onibus`).

**d) O que aconteceria se `custoBase` fosse `private`?**
Se fosse `private`, as subclasses não poderiam acessar o atributo `custoBase` diretamente. O compilador geraria um erro de visibilidade (acesso negado) onde as subclasses tentassem fazer `custoBase + ...`. Para resolver isso, as subclasses seriam obrigadas a chamar o método público `getCustoBase()` para obter o valor e realizar o cálculo.
