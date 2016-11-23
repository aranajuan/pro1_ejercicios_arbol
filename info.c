#include "info.h"

void info_mostrar(const tinfo *i){
    per_mostrar((tper *)i);
}

int info_cargar(tinfo * i){
    return per_cargar((tper *)i);
}

int info_compare(const tinfo* i1, const tinfo * i2){
    return per_compare((tper *)i1,(tper *)i2);
}

int info_load(tinfo * i, const char *n,int e){
    return per_load((tper *)i,n,e);
}
