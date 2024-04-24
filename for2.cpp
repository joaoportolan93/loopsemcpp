#include <iostream>
 using namespace std;
 int main(){
    int numero;
    cout << "Digite um número: " << endl;
    cin >> numero;
    if (numero < 2){
        cout << numero << "Não é primo " << endl;
    } int divisor = 0;
    for (int i = 2; i <= numero /2; ++i){
        if (numero % i == 0){
        divisor++;
        }  
    }
    if (divisor == 0){
        cout << numero << " É número é primo" << endl;
    } else {
           cout << numero <<" Não é primo" << endl;
    }
    return 0;
}