#include <stdio.h>

int main()
{
    double n1, n2, resultado; // double é usado para numeros com casas decimais
    char op; // serve para armazenar o operador

    // Entrada dos números e operador
    printf("Digite o primeiro numero: ");
    scanf("%lf", &n1);

    printf("Digite o segundo numero: ");
    scanf("%lf", &n2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op); // O espaço antes de %c consome o \n pendente

    // Estrutura de decisão com switch
    switch (op) // op é a variável que está sendo avaliada
    {
    case '+':
        resultado = n1 + n2;
        printf("%g %c %g = %g\n", n1, op, n2, resultado);
        break;

    case '-':
        resultado = n1 - n2;
        printf("%g %c %g = %g\n", n1, op, n2, resultado);
        break;

    case '*':
        resultado = n1 * n2;
        printf("%g %c %g = %g\n", n1, op, n2, resultado);
        break;

    case '/':
        if (n2 == 0) //== é usado para comparação
        {
            printf("Erro: divisao por zero!\n");
        }
        else
        {
            resultado = n1 / n2;
            printf("%g %c %g = %g\n", n1, op, n2, resultado);
        }
        break; // O break é usado para sair do switch após executar o case correspondente

    default: // default é executado se nenhum case for correspondido
        printf("Operacao invalida. Use +, -, * ou /.\n");
    }

    return 0;
}
