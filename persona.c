#include "persona.h"

char * eliminarcaracter(char * cad,char c){
    while((cad = strchr(cad,(int)c)) != NULL){
        strcpy(cad,cad+1);
    }
    return cad;
}

void per_mostrar(const tper * p){
    printf("%-20.20s\t%8.8d\n",p->nombre,p->edad);
}

int per_cargar(tper * p){
    printf("__Ingrese nombre: ");
    fgets(p->nombre,sizeof(p->nombre)-1,stdin);
    eliminarcaracter(p->nombre,'\n');
    printf("__Ingrese dni: ");
    scanf("%d",&p->edad);
    FLUSH()
    return 1;
}

int per_compare(const tper* p1, const tper * p2){
    if(p1->edad < p2->edad ){
        return -1;
    }
    return p1->edad != p2->edad;
}

int per_load(tper * p, const char *n, int e){
    strcpy(p->nombre,n);
    p->edad = e;
    return 1;
}
