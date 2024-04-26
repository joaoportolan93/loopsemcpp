#include <iostream>
 using namespace std;
 int main(){
    int num_linhas;
    cout << "Quantidade de linhas: "; 
    cin >> num_linhas;
    for (int i = 1; i <= num_linhas; i++){
        for(int j = 0; j < i; j++)(
            cout << "*"
        );
        cout << endl;
    }
    return 0;
 }