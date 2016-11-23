#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include<stdio.h>

#define FLUSH() int c; while((c = getchar())!='\n' && c != EOF);

typedef struct{
    char nombre[100];
    int edad;
} tper;

void per_mostrar(const tper *);

int per_cargar(tper *);

int per_compare(const tper*, const tper *);

int per_load(tper *, const char * ,int );

#endif // PERSONA_H_INCLUDED
