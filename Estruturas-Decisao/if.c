#include<stdio.h>
int main(){
    int numero;
    printf("Digite um numero:");
    scanf("%d",&numero); //%d é usado para inteiros, & é local de memoria
    if(numero>0){ //se o numero for maior que zero o bloco é executado
        printf("O numero %d e positivo\n",numero);
        printf("Numeros maiores que zero sao positivos\n");
    }
    printf("Fim do programa\n");
    return 0;
} //A condição é uma expressão que resulta em verdadeiro (qualquer valor diferente de zero) ou falso (zero). Se a condição for verdadeira, os comandos dentro das chaves são executados; caso contrário, são ignorados
