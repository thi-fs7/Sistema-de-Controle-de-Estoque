#ifndef ESTOQUE_H
#define ESTOQUE_H

#define MAX_ITENS 50
#define ESTOQUE_MINIMO 5
#define TAXA_PADRAO 0.10
#define TAXA_DESCONTO 0.05
#define TAXA_JUROS 0.08

typedef struct {
    int id;
    char codigo_barras[20]; 
    char nome[30];
    float preco;
    int quantidade;
} Produto;

void exibir_menu(void);
void listar_produtos(Produto lista[], int total) {
    printf("\n--- Produtos Cadastrados ---\n");
    for (int i = 0; i < total; i++) {
        printf("ID: %d | Categoria: %s | Código: %s | Nome: %s | Preco: R$ %.2f | Qtd: %d\n",
               lista[i].id, lista[i].categoria, lista[i].codigo_barras,
               lista[i].nome, lista[i].preco, lista[i].quantidade);
    }
}

#endif
