
#include "info.h"
#include "arbol.h"

int main(void){
    tarbol a = NULL;
    tinfo p1;
    info_load(&p1,"juan",15);
    arbol_add(&a,&p1);

    info_load(&p1,"larita",30);
    arbol_add(&a,&p1);

    info_load(&p1,"santi",13);
    arbol_add(&a,&p1);

    info_load(&p1,"ceci",31);
    arbol_add(&a,&p1);

    info_load(&p1,"pepe",29);
    arbol_add(&a,&p1);

    info_load(&p1,"jpa",12);
    arbol_add(&a,&p1);

    info_load(&p1,"jpa",8);
    arbol_add(&a,&p1);

    arbol_mostrar(&a,ARBOL_ENORDEN);

    printf("Altura del arbol: %d\n",arbol_altura(&a));
    printf("Arbol completo: %d\n",arbol_completo(&a));
    printf("Arbol balanceado: %d\n",arbol_balanceado(&a));

    return 0;
}
