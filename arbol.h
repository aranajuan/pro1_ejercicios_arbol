#ifndef ARBOL_H_INCLUDED
#define ARBOL_H_INCLUDED

#include "info.h"
#include <stdlib.h>

#define ARBOL_ENORDEN 1
#define ARBOL_PREORDEN 2
#define ARBOL_POSTORDEN 3

typedef struct nodo{
    tinfo dato;
    struct nodo * der;
    struct nodo * izq;
} tnodo, *tarbol;

int arbol_add(tarbol *,const tinfo *);

int arbol_altura(const tarbol *);

void arbol_mostrar(const tarbol *, int);

int arbol_completo(const tarbol *);

int arbol_balanceado(const tarbol *);

int arbol_avl(const tarbol *);

#endif // ARBOL_H_INCLUDED
