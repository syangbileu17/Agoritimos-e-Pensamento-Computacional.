Este repositório apresenta a segunda versão de uma calculadora desenvolvida em Linguagem C. A refatoração para a versão 2.0 teve como objetivo criar um sistema modular e escalável, capaz de realizar operações científicas e estatísticas de forma organizada.

⚙️ Estrutura do Código
Funções de Serviço: cada operação (da soma ao cálculo do desvio padrão) é implementada em funções independentes.

Structs e Arrays: uso de struct e arrays fixos para armazenar e gerenciar o histórico de cálculos.

Alocação Dinâmica: aplicação de malloc para manipular conjuntos variáveis de dados, como matrizes ou listas de números.

✨ Funcionalidades
O programa disponibiliza 27 opções de cálculo, abrangendo diferentes áreas:

🔢 Operações Básicas
Adição, subtração, multiplicação e divisão (suporte a múltiplos números)

Resto da divisão

Valor absoluto da diferença entre dois números

📐 Funções Científicas
Potenciação e radiciação

Raiz quadrada e cúbica

Funções trigonométricas: seno, cosseno e tangente

Logaritmos: natural, base 10 e base 2

Fatorial

Separação de mantissa e expoente em números de ponto flutuante

📈 Estatística e Análise
Média, mediana e desvio padrão

Máximo e mínimo

Derivada aproximada por diferenças finitas

MMC e MDC

🧱 Álgebra Linear
Soma dos elementos de uma matriz

Multiplicação entre duas matrizes (com validação de dimensões)

📜 Histórico de Operações
Todas as operações realizadas são registradas em uma lista de histórico, exibida ao final de cada cálculo com detalhes dos valores e resultados.

🛠️ Implementação
Linguagem: C

Estruturas principais: struct Operacao, arrays estáticos e dinâmicos

Compilação: requer vinculação à biblioteca matemática (-lm)

🔧 Como Compilar
bash
gcc cientifica.c -o calculadora -lm
./calculadora
👥 Equipe de Desenvolvimento
Colaborador	Contribuição
Aline Herrero	Implementação completa do sistema e lógica principal
Luis Angelo	Desenvolvimento das funções matemáticas
Jamilly Duda	Estruturação do código e documentação (README.md)
Syang	Testes e implementação de estruturas de dados
💻 Exemplo de Execução
bash
----CALCULADORA CIENTÍFICA----
1 - Adição
...
5 - Potenciação
...
27 - Multiplicação de Matrizes
Escolha a opção desejada: 5
Digite a base:
5
Digite o expoente:
3
O resultado da potenciação é: 125.00

Histórico de Operações:
ID: 1 | Tipo: Potenciação | a1: 5.00 | a2: 3.00 | Resultado: 125.00
