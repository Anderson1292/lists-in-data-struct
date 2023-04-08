#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

struct lista{
	int info;
	Lista *prox;
};

Lista* cria_lista(){
	return NULL;
}
int lista_vazia(Lista *l){
	return (l == NULL);
}
Lista* lista_insere(Lista *l, int info){
	Lista* ln = (Lista*)malloc(sizeof(Lista));
	ln->info = info;
	ln->prox = l;
	return ln;
}
Lista* lista_busca(Lista *l,int info){
	Lista* lAux = l;
	while(lAux != NULL){
		if(lAux->info == info){
			return lAux;
		}
		lAux = lAux->prox;
	}
	return NULL;
}
void imprime_lista(Lista *l){
	Lista* lAux = l;
	while(lAux != NULL){
		printf("Info: %d\n",lAux->info);
		lAux = lAux->prox;
	}
}
Lista* remove_lista(Lista *l,int info){
	if(l != NULL){
		Lista* lAux = l->prox;
		if(l->info == info){
			free(l);
			return lAux;
		}
		else{
			Lista* lAnt = l;
			while(lAux != NULL){
				if(lAux->info == info){
					lAnt->prox = lAux->prox;
					free(lAux);
					break;
				} else {
					lAnt = lAux;
					lAux = lAux->prox;
				}
			}
		}
	}
	return l;
}
void libera_lista(Lista *l){
	Lista* lProx;
	while(l != NULL){
		lProx = l->prox;
		free(l);
		l = lProx;
	}
}
