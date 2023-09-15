#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

// https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function

template<typename T, const size_t m, const size_t n>
void LeMatriz(T (&A)[m][n])
{
    size_t i, j;
    for(i=0; i < m; i++)
        for(j=0; j < n; j++)
        {
            cout << "Entre com o valor para a posicao [" << i << "," << j << "]" << endl;
            cin >> A[i][j];
        }
}

template<typename T, const size_t m, const size_t n>
void EscreveMatriz(T (&A)[m][n])
{
    size_t i, j;
    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

template<typename T, const size_t m, const size_t n>
bool VerificaMatrizNula(T (&A)[m][n])
{
    size_t i, j;

    for(i=0; i < m; i++)
        for(j=0; j < n; j++)
            if(A[i][j] != 0)
                return false;

    return true;
}

#endif // HEADER_H_INCLUDED
