typedef struct lista Lista;

//Cria uma lista vazia
Lista* cria_lista();

//Verifica se uma lista est� vazia
int lista_vazia(Lista *l);

//Insere um elemento no inicio da lista
Lista* lista_insere(Lista *l, int info);

//Busca um elemento em uma lista
Lista* lista_busca(Lista *l, int info);

//Imprime uma lista
void imprime_lista(Lista *l);

//Remover um elemento de uma lista
void remove_lista(Lista *l, int info);

//Fun��o que libera o espa�o alocado por uma lista
void libera_lista(Lista *l);

//Fun��o que ordena os valores de uma lista
Lista* lista_insere_ordenado(Lista *l,int info);
