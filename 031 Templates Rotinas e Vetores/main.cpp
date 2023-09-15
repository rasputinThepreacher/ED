#include "header.h"

int main()
{
    int matriz[2][2] {{0,0},{0,0}};

    cout << "Exemplos baseados no material disponivel no sitio web" << endl;
    cout << "\'https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function\'" << endl << endl;

    LeMatriz( matriz );
    EscreveMatriz( matriz );

    if (VerificaMatrizNula(matriz))
        cout << "Eh Matriz Nula";
    else
        cout << "Nao eh Matriz Nula";

    return 0;
}
