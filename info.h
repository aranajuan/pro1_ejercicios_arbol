#ifndef INFO_H_INCLUDED
#define INFO_H_INCLUDED

#include "persona.h"

typedef tper tinfo;

void info_mostrar(const tinfo *);

int info_cargar(tinfo *);

int info_compare(const tinfo*, const tinfo *);

int info_load(tinfo *, const char * ,int );
#endif // INFO_H_INCLUDED
