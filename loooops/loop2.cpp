#include <iostream>
int main(){
    int numero;
    printf("Digite um número (digite um número negativo para sair): ");
    scanf("%d", &numero);
    while (numero >= 0) {
        printf("Você digitou: %d\n", numero);
        printf("Digite um outro número (digite um número negativo para sair): ");
        scanf("%d", &numero);
}
printf("Programa encerrado.\n");
return 0;

}