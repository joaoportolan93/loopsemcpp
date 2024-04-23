#include <iostream>
using namespace std;

int main () {
    int valor;
    int i = 1;
    cout << "Digite um numero: ";
    cin >> valor; 
    while (i <= valor){
        if(i % 2 == 0){
          cout << " " << i << endl; 
        } 
        i++;   
    }
 return 0;
}