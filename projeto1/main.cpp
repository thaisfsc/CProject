/*#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

struct elemento {
    char conteudo;
    elemento *proximo;
};

elemento *inicio = NULL;
int numeroElementos = 0;

elemento *criaNovo();
void insereFim();
void insereInicio();
void inserePosicao();
void limpaLista();
void mensagem(const char* mensagem);
void mostraLista();
void retiraInicio();
void retiraFim();
void retiraPosicao();

main(void) {
    setlocale(LC_ALL, "Portuguese");
    char opcao;
    do {
        mostraLista();
        printf("\n\n\n                  Menu\n");
        printf("-------------------------------\n");
        printf("0 - Sair\n\n");
        printf("1 - Limpa a lista\n\n");
        printf("2 - Incluir no inicio\n");
        printf("3 - Incluir no fim\n");
        printf("4 - Incluir na posição\n\n");
        printf("5 - Excluir no inicio\n");
        printf("6 - Excluir no fim\n");
        printf("7 - Ecluir na posição\n");
        printf("Opção: [ ]%c%c", 8, 8); //essa porcentagem e os dois oitos fazem o cursos voltar para dentro das chaves
        opcao = getchar(); //o getche com e no fim mostra a tela aquilo que você precionou
        switch (opcao) {
            case '0': break;
            case '1': limpaLista();
                      break;
            case '2': insereInicio();
                      break;
            case '3': insereFim();
                      break;
            case '4': inserePosicao();
                      break;
            case '5': retiraInicio();
                      break;
            case '6': retiraFim();
                      break;
            case '7': retiraPosicao();
                      break;
            default: mensagem("Opção inválida !!!");
        }
      } while (opcao != '0');
      mensagem("Saindo do programa!!!");
      //limpaLista();  --> Caso o programa continue é necessário
    }

elemento *criaNovo() {
    elemento *novo = (elemento *) malloc(sizeof(elemento));
    if (!novo) {
        mensagem("Sem memória disponível !!!");
        exit(1);
    } else {
        printf("\n\nNovo elemento: ");
        novo->conteudo = getchar();
        novo->proximo = NULL;
        return novo;
        }
}

void insereFim() {
    elemento *novo = criaNovo();
    if (inicio == NULL)
        inicio = novo;
    else {
        elemento *temp = inicio;
        while (temp->proximo !=NULL) {
            temp = temp->proximo;
        }
        temp->proximo = novo;
    }
    numeroElementos++;
}

void insereInicio() {
    elemento *novo = criaNovo();
    elemento *inicioAnterior = inicio;
    inicio = novo;
    novo->proximo = inicioAnterior;
    numeroElementos++;
}

void inserePosicao() {
    int posicao;
    printf("\n\nEm qual posição deseja inserir? ");
    scanf("%d", &posicao);
    if (posicao >= 1 && posicao <= numeroElementos) {
        if (posicao == 1)
            insereInicio();
        else {
            elemento *temp = inicio, *tempAnterior;
            elemento *novo = criaNovo();
            for (int i = 1 ; i < posicao ; i++) {
                 tempAnterior = temp;
                 temp = temp->proximo;
            }
            tempAnterior->proximo = novo;
            novo->proximo = temp;
            numeroElementos++;
        }
    } else
        mensagem("Posição inválida !!!");
}





int valor;
int numero[5];
int notas[3][4];
char opcao;

struct produto {
    char nome[51];
    float valorCompra;
    float valorVenda;
    int quantidade;
};

produto meuProduto;

main() {{
    setlocale(LC_ALL, "Portuguese");
    printf ("Olá mundo!!!");
    printf("\n"); //para mudar de linha
    printf("Informe um valor: ");
    scanf("%d", &valor);
    printf("O dobro deste valor é %d", valor*2);

    opcao = 'N';
    while (opcao != 'S' & opcao !='s') {
        printf("\nDeseja sair? (S/N): ");
        opcao = getchar();
        }
        printf("\nSaindo!!!\n");

    int a = 0;
    while (a <= 9) {
        printf("%d\n",a);
        a++;
        }

    do{
        printf("\nDeseja sair? (S/N):");
        opcao = getchar();
    } while ( opcao !='S' & opcao !='s');
    printf("\nSaindo!!!");

    for (int a = 0; a <= 4; a++) {

        numero[a] = a * 2;
        printf("%d - %d\n",a, a * 2);

        }

    printf("informe as notas dos alunos\n\n");
    for (int a = 0; a < 3; a++) {
        printf("%do. aluno\n", a + 1);
        for (int n = 0; n < 4; n++){
            printf("    %da. nota: ", n+1);
            scanf("%d", &notas[a][n]);
        }
    }

    printf("Informe os dados do produto\n\n");
    printf("Nome: ");
    //gets(meuProduto.nome);
    printf("Valor compra: ");
    scanf("%f", &meuProduto.valorCompra);
    printf("Valor venda: ");
    scanf("%f", &meuProduto.valorVenda);
    printf("Quantidade: ");
    scanf("%d", &meuProduto.quantidade);


    int x = 5;
    int *a = &x; //no a está armazenado um endereço de memória, um ponteiro de um inteiro. o & comercial está pegando o endereço de x e armazenado em a
    printf("%d\n", x);
    printf("%04x\n", a);//mostrar o valor em hexadecimal com 04 bytes
    printf("%d\n", *a);// imprime o conteúdo apontado por a

    }
#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos arr[j] e arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[10] = {9, 2, 6, 3, 1, 8, 4, 7, 5, 10};

    std::cout << "Array antes da ordenação: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    bubbleSort(arr, 10);

    std::cout << "\nArray após a ordenação: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}


#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int arr[10] = {9, 2, 6, 3, 1, 8, 4, 7, 5, 10};

    std::cout << "Array antes da ordenação: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    insertionSort(arr, 10);

    std::cout << "\nArray após a ordenação: ";
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
*/
