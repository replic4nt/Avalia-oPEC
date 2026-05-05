#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int id;
    char titulo[100];
    char genero[50];
    char editora[50];
    int edicao;
} Livro;

Livro criarLivro(int id, char titulo[], char genero[], char editora[], int edicao) {
    Livro l;
    l.id = id;
    strcpy(l.titulo, titulo);
    strcpy(l.genero, genero);
    strcpy(l.editora, editora);
    l.edicao = edicao;
    return l;
}

Livro atualizarLivro(Livro l, char titulo[], char genero[], char editora[], int edicao) {
    strcpy(l.titulo, titulo);
    strcpy(l.genero, genero);
    strcpy(l.editora, editora);
    l.edicao = edicao;
    return l;
}

int buscarLivroPorId(Livro lista[], int tamanho, int id) {
    for (int i = 0; i < tamanho; i++) {
        if (lista[i].id == id) {
            return i;
        }
    }
    return -1;
}

int removerLivro(Livro lista[], int tamanho, int id) {
    int pos = buscarLivroPorId(lista, tamanho, id);

    if (pos == -1) return tamanho;

    for (int i = pos; i < tamanho - 1; i++) {
        lista[i] = lista[i + 1];
    }

    return tamanho - 1;
}

void mostrarLivro(Livro l) {
    printf("\nID: %d", l.id);
    printf("\nTítulo: %s", l.titulo);
    printf("\nGênero: %s", l.genero);
    printf("\nEditora: %s", l.editora);
    printf("\nEdição: %d\n", l.edicao);
}

int main() {
    Livro biblioteca[MAX];
    int tamanho = 0;
    int opcao;

    do {
        printf("\n1 - Cadastrar");
        printf("\n2 - Listar");
        printf("\n3 - Atualizar");
        printf("\n4 - Remover");
        printf("\n0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int id, edicao;
            char titulo[100], genero[50], editora[50];

            printf("ID: ");
            scanf("%d", &id);

            printf("Título: ");
            scanf(" %[^\n]", titulo);

            printf("Gênero: ");
            scanf(" %[^\n]", genero);

            printf("Editora: ");
            scanf(" %[^\n]", editora);

            printf("Edição: ");
            scanf("%d", &edicao);

            biblioteca[tamanho] = criarLivro(id, titulo, genero, editora, edicao);
            tamanho++;
        }

        else if (opcao == 2) {
            for (int i = 0; i < tamanho; i++) {
                mostrarLivro(biblioteca[i]);
            }
        }

        else if (opcao == 3) {
            int id;
            printf("Digite o ID: ");
            scanf("%d", &id);

            int pos = buscarLivroPorId(biblioteca, tamanho, id);

            if (pos != -1) {
                char titulo[100], genero[50], editora[50];
                int edicao;

                printf("Novo título: ");
                scanf(" %[^\n]", titulo);

                printf("Novo gênero: ");
                scanf(" %[^\n]", genero);

                printf("Nova editora: ");
                scanf(" %[^\n]", editora);

                printf("Nova edição: ");
                scanf("%d", &edicao);

                biblioteca[pos] = atualizarLivro(
                    biblioteca[pos], titulo, genero, editora, edicao
                );
            }
        }

        else if (opcao == 4) {
            int id;
            printf("ID para remover: ");
            scanf("%d", &id);

            tamanho = removerLivro(biblioteca, tamanho, id);
        }

    } while (opcao != 0);

    return 0;
}
