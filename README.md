# Super Trunfo de Países (Desafio Avançado em C)

Este é um projeto de console em C que simula um jogo de "Super Trunfo" (Top Trumps) entre duas cartas de países. O programa demonstra o uso de estruturas de decisão (`if-else`, `switch`), loops (`do-while`), tratamento de entrada do usuário (`scanf`), e lógica de programação avançada, como menus dinâmicos e uso do operador ternário.

## 🚀 Funcionalidades

* **Cadastro de Cartas:** Permite ao usuário cadastrar os atributos de duas cartas (países).
* **Menu Interativo:** Um menu principal em loop permite que o jogador realize múltiplas rodadas de comparação.
* **Seleção de Atributo Duplo:** O jogador deve escolher **dois** atributos diferentes para a comparação.
* **Menu Dinâmico:** O menu para a escolha do segundo atributo oculta dinamicamente o atributo que já foi selecionado.
* **Lógica de Soma:** O programa soma os valores dos dois atributos escolhidos para cada carta. A carta com a **maior soma** vence a rodada.
* **Tratamento de Regra Especial:** A regra "menor vence" da Densidade Demográfica é tratada invertendo-se o valor (`1 / densidade`) antes da soma, para que uma densidade menor contribua com um valor maior.
* **Validação:** O sistema impede que o usuário escolha o mesmo atributo duas vezes ou insira opções de menu inválidas.

## ⚙️ Atributos Disponíveis

O jogador pode escolher entre os seguintes atributos numéricos:

1.  **População** (maior valor vence)
2.  **Área** (maior valor vence)
3.  **PIB** (maior valor vence)
4.  **Pontos Turísticos** (maior valor vence)
5.  **Densidade Demográfica** (menor valor vence)
    * *Nota de Implementação:* Para que a regra "menor vence" funcione na soma total, o programa usa o valor **invertido** da densidade (calculado como `1 / densidade`). Desse modo, uma densidade menor resulta em um número maior, contribuindo mais positivamente para a soma.

## 🛠️ Como Compilar e Executar

Este programa foi escrito em C padrão e pode ser compilado com qualquer compilador C moderno, como o GCC.

### Pré-requisitos

* Um compilador C (ex: [GCC](https://gcc.gnu.org/), [Clang](https://clang.llvm.org/)) instalado.
* Um terminal ou prompt de comando.

### Instruções

1.  **Clone o repositório** ou salve o código-fonte em um arquivo (ex: `super_trunfo.c`).

2.  **Abra seu terminal** e navegue até a pasta onde o arquivo foi salvo.

3.  **Compile o programa.** Se o seu arquivo se chama `super_trunfo.c`, execute:

    ```bash
    gcc -o super_trunfo super_trunfo.c
    ```

    * `gcc` é o compilador.
    * `-o super_trunfo` define o nome do arquivo executável de saída como `super_trunfo`.
    * `super_trunfo.c` é o seu arquivo de código-fonte.

4.  **Execute o programa:**

    * No Linux ou macOS:
        ```bash
        ./super_trunfo
        ```
    * No Windows:
        ```bash
        super_trunfo.exe
        ```

## 🎮 Exemplo de Uso

Ao executar o programa, você primeiro cadastrará as duas cartas:

```
--- Cadastro da Carta 1 (Pais 1) ---
Nome do pais: Brasil
Populacao: 214000000
Area (km2): 8500000
PIB (em bilhoes): 1600
Pontos Turisticos: 50

--- Cadastro da Carta 2 (Pais 2) ---
Nome do pais: Argentina
Populacao: 45000000
Area (km2): 2700000
PIB (em bilhoes): 450
Pontos Turisticos: 30
```

Em seguida, o menu de batalha aparecerá.

```
--- SUPER TRUNFO: ESCOLHA DUPLA ---
Cartas na mesa: Brasil vs Argentina

Escolha o PRIMEIRO atributo (1-5) ou Sair (6):
1. Populacao
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica (Menor vence)
6. Sair do Jogo
Opcao 1: 1
```

O menu dinâmico para a segunda opção aparecerá (note a ausência da Opção 1):

```
Escolha o SEGUNDO atributo (diferente do 1):
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica (Menor vence)
Opcao 2: 3
```

Finalmente, o resultado da soma será exibido:

```
--- RESULTADO DA BATALHA ---
Atributos comparados: Populacao + PIB
----------------------------------------
Pais: Brasil
  Populacao: 214000000.00
  PIB: 1600.00
  SOMA TOTAL: 214001600.00
----------------------------------------
Pais: Argentina
  Populacao: 45000000.00
  PIB: 450.00
  SOMA TOTAL: 45000450.00
----------------------------------------
VENCEDOR: Brasil vence!
```