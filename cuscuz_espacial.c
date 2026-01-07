#include <stdio.h>

// Função responsavel por salvaros dados no arquivo
void salvar (char tipo[], int agua, int tempo) {
File  *arquivo;

// Abre o arquivo em modo de acréscimo  (append)
arquivo = fopen ("dados_cuscuz.txt","a");

if (arquivo ==NULL) {
    printf("Erro ao abrir o arquivo! \n");
    return;
}

// Escreve os dados no arquivo
printf(arquivo,"Cuscuz: %s | Agua: %dml | tempo: %dmin\n", tipo, agua, tempo);

// Feche o arquivo
fclose(arquivo);
}

// Função principal que simula o preparoo
void preparar_cuscuz() {
    char tipo[50];
    int agua;
    int tempo;

    printf("Digite o tipo de cuscuz: ");
    scanf(" %[^\n]", tipo);

    printf("Quantidade de agua (ml): ");
    scanf("%d", &agua);

    printf("Tempo de preparo (min): ");
    scanf("%d", &tempo);

    printf("\n Preparando cuscuz espacial...\n");

    salvar(tipo, agua , tempo);

    printf("cuscuz registrado com sucesso!\n");
}

int main() {
    preparar_cuscuz();
    retur 0;
}

