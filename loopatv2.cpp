#include <iostream>
int main(){
    int numero, soma = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("Digite um outro numero: ");
    scanf("%d", &soma);
     
while (numero > 0 ) {
    int digito = numero % 10;
    soma += digito; 
    numero /= 10;
}
printf("A soma dos digitos é: %d\n", soma);
return 0;
}