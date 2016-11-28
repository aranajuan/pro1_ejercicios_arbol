#include "arbol.h"

int arbol_add(tarbol * a,const tinfo * d){
    while(*a){
        if( info_compare(d , &(*a)->dato) > 0){
            a = &(*a)->der;
        }else{
            a = &(*a)->izq;
        }

    }
    tnodo * n = (tnodo *)malloc(sizeof(tnodo));
    n->der=NULL;
    n->izq = NULL;
    n->dato = *d;
    *a = n;
    return 1;
}

int arbol_altura(const tarbol * a){
    int hi,hd;
    if(*a){
        hi = arbol_altura(&(*a)->izq);
        hd = arbol_altura(&(*a)->der);
        return hi>hd ? hi+1 : hd+1;
    }
    return 0;
}

void arbol_mostrar(const tarbol * a, int o){
    if(*a){
        if(o==ARBOL_PREORDEN)
            info_mostrar(&(*a)->dato);

        arbol_mostrar(&(*a)->izq,o);

        if(o==ARBOL_ENORDEN)
            info_mostrar(&(*a)->dato);

        arbol_mostrar(&(*a)->der,o);

        if(o==ARBOL_POSTORDEN)
            info_mostrar(&(*a)->dato);
    }
}

int ver_completo(const tarbol *a, int h){
    if(*a){
        return ver_completo(&(*a)->izq,h-1) &&
            ver_completo(&(*a)->der,h-1);
    }
    return h == 0;
}

int arbol_completo(const tarbol *a){
    int h = arbol_altura(a);
    return ver_completo(a,h);
}

int ver_balanceado(const tarbol *a, int h){
    if(*a){
        return ver_balanceado(&(*a)->izq,h-1) &&
            ver_balanceado(&(*a)->der,h-1);
    }
    return h <= 1;
}

int arbol_balanceado(const tarbol *a){
    int h = arbol_altura(a);
    return ver_balanceado(a,h);
}

int ver_avl(const tarbol *a, int h){

	if(*a){
		return ver_avl((*a)->izq, h-1) &&
				ver_avl((*a)->der, h-1);
	}
	return h == 1;
}

int arbol_avl(const tarbol *a){
    if(*a){
        int fe = arbol_altura(&(*a)->der) - arbol_altura(&(*a)->izq);
        if(fe<=1 && fe >=-1){
            return arbol_avl(&(*a)->der) && arbol_avl(&(*a)->izq);
        }
        printf("no es avl en %d fe: %d",(*a)->dato.edad,fe);
        return 0;
    }
    return 1;
}
