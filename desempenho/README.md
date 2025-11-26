🔎 Algoritmos de Ordenação em C
📌 Link do Repositório 📌 Descrição do Projeto Este trabalho apresenta a implementação de três algoritmos clássicos de ordenação em Linguagem C, com o objetivo de comparar o número de comparações, trocas realizadas e tempo de execução. A proposta é avaliar a eficiência e a escalabilidade de cada técnica em diferentes tamanhos de entrada.

🔹 Algoritmos Utilizados
Bubble Sort Escolhido por sua simplicidade e caráter didático, embora seja pouco eficiente em grandes volumes de dados.

Insertion Sort Selecionado por apresentar bom desempenho em listas pequenas ou parcialmente ordenadas.

Quick Sort (Lomuto, pivô final) Implementado por ser rápido em média (
𝑂
(
𝑛
log
⁡
𝑛
)
) e amplamente utilizado em bibliotecas reais.

⚙️ Compilação e Execução
Compilar:

bash
gcc -O1 -std=c11 src/*.c -o ordena
Executar:

bash
./ordena
Durante a execução, o programa solicita:

O tamanho do vetor (n)

Os n números que serão ordenados

📌 Critérios de Contagem
Comparações

Bubble Sort: cada verificação arr[i] > arr[i+1]

Insertion Sort: cada teste lista[j] > aux, incluindo a comparação que falha

Quick Sort: cada verificação v[j] <= pivot durante a partição

Trocas

Bubble Sort: cada troca entre dois elementos

Insertion Sort: cada deslocamento lista[j+1] = lista[j]

Quick Sort: cada troca, incluindo a movimentação final do pivô

📊 Resultados (média de 5 execuções)
Entrada utilizada:

Código
4 5 5 3 9 3 9 1
Saída:

Bubble Sort: 1 3 3 4 5 5 9 9 → Comparações: 28 | Trocas: 14 | Tempo: 0.00 ms

Insertion Sort: 1 3 3 4 5 5 9 9 → Comparações: 19 | Trocas: 14 | Tempo: 0.00 ms

Quick Sort: 1 3 3 4 5 5 9 9 → Comparações: 18 | Trocas: 10 | Tempo: 0.00 ms

Método	N	Comparações	Trocas	Tempo (ms)
Bubble Sort	8	28	14	0.00
Insertion Sort	8	19	14	0.00
Quick Sort	8	18	10	0.00
📌 Discussão Crítica
Bubble Sort: não é escalável, sendo útil apenas para fins didáticos.

Insertion Sort: 
𝑂
(
𝑛
2
)
 no pior caso, mas pode atingir 
𝑂
(
𝑛
)
 em listas quase ordenadas.

Quick Sort: 
𝑂
(
𝑛
log
⁡
𝑛
)
 em média, eficiente e adequado para grandes entradas.

✅ Conclusão
Quick Sort se destaca como o método mais eficiente para grandes conjuntos de dados.

Insertion Sort é competitivo em listas pequenas ou parcialmente ordenadas.

Bubble Sort funciona como referência didática, mas não é viável em cenários reais de grande escala.
