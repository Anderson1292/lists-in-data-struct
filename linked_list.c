#include "lista.h"

int main(void){
	Lista* l = cria_lista();
	l = lista_insere(l,10);
	l = lista_insere(l,20);
	l = lista_insere(l,25);
	l = lista_insere(l,30);
	l = remove_lista(l,20);
	imprime_lista(l);
	
	return 0;
}
