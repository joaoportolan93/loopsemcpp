#include <iostream>
int main (){
    int numero;
    printf("Digite um numero par ver sua tabuada de multiplicação: ");
    scanf("%d", &numero);
    for (int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}