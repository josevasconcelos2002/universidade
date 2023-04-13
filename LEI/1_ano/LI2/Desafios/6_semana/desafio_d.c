#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int n_pedido;
    int timestamp;
    int confecao;
    int lucro;
} Pedido;

Pedido pedidos[100];

void inicializa() {
    for (int i = 0; i < 100; i++) {
        pedidos[i].lucro = 0;
    }
}

void insere(Pedido *p) {
    int i = 0;
    if (pedidos[0].lucro == 0) {
        pedidos[0].lucro = p->lucro;
        pedidos[0].timestamp = p->timestamp;
        pedidos[0].n_pedido = p->n_pedido;
        pedidos[0].confecao = p->confecao;
    } else {
        while (pedidos[i].lucro != 0) {
            i++;
        }
        pedidos[i].lucro = p->lucro;
        pedidos[i].n_pedido = p->n_pedido;
        pedidos[i].timestamp = p->timestamp;
        pedidos[i].confecao = p->confecao;
    }
}

int cmp(const void *a, const void *b) {
    const Pedido *pa = a;
    const Pedido *pb = b;
    if (pa->confecao != pb->confecao) {
        return pa->confecao - pb->confecao;
    }
    return pb->lucro - pa->lucro;
}

void lucro() {
    int n_pedidos = 0;
    char linha[1000];
    Pedido *p = malloc(sizeof(Pedido));
    if (fgets(linha, sizeof(linha), stdin)) {
        n_pedidos = atoi(linha);
        for (int i = 0; i < n_pedidos; i++) {
            if (fgets(linha, sizeof(linha), stdin)) {
                char *linha1 = strtok(linha, " ");
                p->n_pedido = atoi(linha1);
                linha1 = strtok(NULL, " ");
                p->timestamp = atoi(linha1);
                linha1 = strtok(NULL, " ");
                p->confecao = atoi(linha1);
                linha1 = strtok(NULL, "\n");
                p->lucro = atoi(linha1);
                insere(p);
            }
        }
    }
    qsort(pedidos, n_pedidos, sizeof(Pedido), cmp);
    int tempo = 0;
    int lucro = 0;
    for (int i = 0; i < n_pedidos; i++) {
        if (tempo + pedidos[i].confecao <= pedidos[i].timestamp) {
            tempo += pedidos[i].confecao;
            lucro += pedidos[i].lucro;
        }
    }
    printf("%d\n", lucro);
}

int main() {
    lucro();
    return 0;
}

