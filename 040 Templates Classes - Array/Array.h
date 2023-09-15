#include <stdlib.h>

#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
    protected:
        T* ptrVetorElementos;
        unsigned int tamanho;
    private:

    public:
        //-----------------------------------------------------------------
        Array()
        {
            this->tamanho = 5;
            this->ptrVetorElementos = new T [this->tamanho];
        }
        //-----------------------------------------------------------------
        Array(unsigned int _tamanho)
        {
            this->tamanho = _tamanho;
            this->ptrVetorElementos = new T [this->tamanho];
        }
        //-----------------------------------------------------------------
        ~Array()
        {
            delete []this->ptrVetorElementos;
        }
        //-----------------------------------------------------------------
        T getElemento(unsigned int idxElemento)
        {
            if (idxElemento>=this->tamanho)
                return NULL;

            return this->ptrVetorElementos[idxElemento];
        }
        //-----------------------------------------------------------------
        int setElemento(unsigned int idxElemento, T ptrElemento)
        {
            if (idxElemento>=this->tamanho)
                return -1;

            this->ptrVetorElementos[idxElemento] = ptrElemento;

            return +1;
        }
        //-----------------------------------------------------------------
        int getSize()
        {
            return this->tamanho;
        }
};

#endif // ARRAY_H
