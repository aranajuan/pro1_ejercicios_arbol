
#include "info.h"
#include "arbol.h"

int main(void){
    tarbol a = NULL;
    tinfo p1;
    info_load(&p1,"juan",5);
    arbol_add(&a,&p1);

    info_load(&p1,"larita",3);
    arbol_add(&a,&p1);

    info_load(&p1,"santi",2);
    arbol_add(&a,&p1);

    info_load(&p1,"ceci",8);
    arbol_add(&a,&p1);

    info_load(&p1,"pepe",7);
    arbol_add(&a,&p1);

    info_load(&p1,"jpa",10);
    arbol_add(&a,&p1);

info_load(&p1,"jpa",4);
    arbol_add(&a,&p1);

    arbol_mostrar(&a,ARBOL_ENORDEN);

    printf("Altura del arbol: %d\n",arbol_altura(&a));
    printf("Arbol completo: %d\n",arbol_completo(&a));
    printf("Arbol balanceado: %d\n",arbol_balanceado(&a));

    printf("Arbol avl: %d\n",arbol_avl(&a));

    return 0;
}
